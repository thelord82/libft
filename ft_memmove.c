/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:59:22 by malord            #+#    #+#             */
/*   Updated: 2022/04/05 10:04:44 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)src;
	while (i < n)
	{
		*(char *)(tmp + i) = *(char *)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(tmp + i);
		i++;
	}
	return (dest);
}*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src && n > 0)
		return (NULL);
	if ((size_t)dest > (size_t)src)
	{
		i = n - 1;
		while (i >= 0 && i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
