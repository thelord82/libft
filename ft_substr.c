/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:23:40 by malord            #+#    #+#             */
/*   Updated: 2022/04/05 13:16:18 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*nstr;
	unsigned int	s;
	unsigned int	i;

	nstr = (char *)malloc(len * sizeof(char));
	s = start;
	i = 0;
	if (!nstr)
		return (NULL);
	while (str && i <= (len - 1))
	{
		nstr[i] = str[s];
		i++;
		s++;
	}
	return (nstr);
}
