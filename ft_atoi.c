/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:42:31 by malord            #+#    #+#             */
/*   Updated: 2022/03/31 10:44:25 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

int	ft_isnumber(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nombre;
	int	neg;

	i = 0;
	nombre = 0;
	neg = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] && ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		neg = -neg;
		i++;
	}
	while (str[i] && ft_isnumber(str[i]) == 1)
	{
		nombre = nombre * 10 + (str[i] - '0');
		i++;
	}
	return (nombre * neg);
}
