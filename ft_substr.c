/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:23:40 by malord            #+#    #+#             */
/*   Updated: 2022/04/05 21:26:32 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*nstr;
	unsigned int	i;

	nstr = (char *)malloc((sizeof(char) * len) + 1);
	i = 0;
	if (!nstr)
		return (NULL);
	while (str && len > 0 && i <= (len - 1))
	{
		nstr[i] = str[start];
		i++;
		start++;
	}
	nstr[i] = '\0';
	return (nstr);
}
