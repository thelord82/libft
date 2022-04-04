/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:38:30 by malord            #+#    #+#             */
/*   Updated: 2022/04/04 13:23:32 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	rlen;

	i = 0;
	j = 0;
	rlen = ft_strlen(str);
	if (len < rlen)
		rlen = len;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (str && i < rlen)
	{
		while (str[i + j] == to_find[j] && ((i + j) < rlen))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
