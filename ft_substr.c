/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:23:40 by malord            #+#    #+#             */
/*   Updated: 2022/04/07 20:00:23 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*nstr;
	unsigned int	i;

	if (len > ft_strlen(str))
		len = ft_strlen(str);
	nstr = (char *)ft_calloc((len + 1), sizeof(char));
	i = 0;
	if (!nstr || !str)
		return (NULL);
	if (start > ft_strlen(str))
		return (nstr);
	while (str && len > 0 && i <= (len - 1))
	{
		nstr[i] = str[start];
		i++;
		start++;
	}
	return (nstr);
}
