/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:24:11 by malord            #+#    #+#             */
/*   Updated: 2022/04/08 17:25:12 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	w;

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
	size_t	l;

	l = 0;
	while (cpt >= 0 && s[cpt] != c)
	{
		cpt--;
		l++;
	}
	return (l);
}

static	char	*ft_trimword(char const *s, char c, int cpt)
{
	size_t	j;
	char	*nstr;

	j = 0;
	nstr = ft_calloc(ft_wordlen(s + cpt, c, cpt) + 1, sizeof(char));
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
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	result = ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	i = 0;
	j = 0;
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				result[j] = ft_trimword(s, c, i);
				j++;
			}
		}
		i++;
	}
	return (result);
}
/*result[j++] = ft_trimword(s, c, i);
			while (s[i] != c && s[i] != '\0')
				i++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (result);*/
