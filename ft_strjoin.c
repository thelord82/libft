/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:23:50 by malord            #+#    #+#             */
/*   Updated: 2022/04/07 10:22:02 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	nstr = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	i = 0;
	if (!nstr)
		return (NULL);
	while (*s1)
	{
		nstr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		nstr[i] = *s2;
		s2++;
		i++;
	}
	return (nstr);
}
