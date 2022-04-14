/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:13:25 by malord            #+#    #+#             */
/*   Updated: 2022/04/14 15:14:35 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Puts the lowercase letter in parameter in uppercase. Does nothing if the 
	parameter is not a lowercase  letter. */

#include "libft.h"

int	ft_toupper(int n)
{
	if (n >= 97 && n <= 122)
		return (n - 32);
	return (n);
}
