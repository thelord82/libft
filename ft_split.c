/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:24:11 by malord            #+#    #+#             */
/*   Updated: 2022/04/11 10:59:44 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			w++;
		i++;
	}
	return (w);
}

static int	ft_wordlen(char const *s, char c, int cpt)
{
	int	l;

	l = 0;
	while (s[cpt] != c && s[cpt] != '\0')
	{
		l++;
		cpt++;
	}
	return (l);
}

static	char	*ft_trimword(char const *s, char c, int cpt)
{
	int		j;
	char	*nstr;

	j = 0;
	nstr = ft_calloc(ft_wordlen(s, c, cpt) + 1, sizeof(char));
	if (!nstr)
		return (NULL);
	while (s[cpt])
	{
		if (s[cpt] != c)
		{
			nstr[j] = s[cpt];
			if (s[cpt + 1] == c || s[cpt + 1] == '\0')
				break ;
			else
			{
				cpt++;
				j++;
			}	
		}
		else
			cpt++;
	}
	return (nstr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		index;

	if (!s)
		return (NULL);
	result = ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	i = 0;
	j = 0;
	index = -1;
	if (!result)
		return (NULL);
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && index >= 0)
		{
			result[j++] = ft_trimword(s, c, index);
			index = -1;
		}
		i++;
	}
	return (result);
}
