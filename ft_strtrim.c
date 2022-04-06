/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:24:03 by malord            #+#    #+#             */
/*   Updated: 2022/04/06 16:20:22 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	i;
	unsigned int	s;
	unsigned int	e;

	i = 0;
	s = 0;
	e = ft_strlen(s1) - 1;
	while (set[i])
	{
		if (set[i] == s1[s])
		{
			s++;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (set[i] && e > s)
	{
		if (set[i] == s1[e])
		{
			e--;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	trim = ft_substr(s1, s, (e - s) + 1);
	return (trim);
}
