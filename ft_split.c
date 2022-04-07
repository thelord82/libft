/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:24:11 by malord            #+#    #+#             */
/*   Updated: 2022/04/07 10:22:18 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**nsplit;
	size_t	i;
	size_t	j;
	size_t	k;

	nsplit = ft_calloc(ft_strlen(s), sizeof(char));
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] != c)
			i++;
		while (j <= i)
		{
			nsplit[k][j] = s[i];
			j++;
			i++;
		}
		k++;
		i++;
	}
	return (nsplit);
}
