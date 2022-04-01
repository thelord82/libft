/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:29:08 by malord            #+#    #+#             */
/*   Updated: 2022/04/01 09:10:18 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] && i < n)
	{
		*(char *)s[i] = '\0';
		i++;
	}
}