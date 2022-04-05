/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:56:36 by malord            #+#    #+#             */
/*   Updated: 2022/04/05 08:54:14 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*sc;

	dst = dest;
	sc = src;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*dst = *sc;
		dst++;
		sc++;
	}
	return (dest);
}
