/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:01:16 by malord            #+#    #+#             */
/*   Updated: 2022/04/14 10:09:53 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if the character of value n in ASCII is printable

#include "libft.h"

int	ft_isprint(int n)
{
	if (n >= 32 && n < 127)
		return (1);
	return (0);
}
