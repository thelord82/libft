/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:24:49 by malord            #+#    #+#             */
/*   Updated: 2022/04/14 10:25:10 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes the character in the given file descriptor in parameter

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
