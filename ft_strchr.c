/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:56:30 by malord            #+#    #+#             */
/*   Updated: 2022/04/14 10:31:51 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Finds the first occurence of c in string s, returns pointer to the occurence

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
