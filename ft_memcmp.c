/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:33:18 by malord            #+#    #+#             */
/*   Updated: 2022/04/14 10:20:51 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compares strings s1 et s2, while n bytes

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (!(*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i)))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
