/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:19:07 by malord            #+#    #+#             */
/*   Updated: 2022/04/13 14:37:09 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	ft_lstiter(lst, (*(f)));
	while (lst->next != NULL)
	{
		tmp = lst->next;
		new->content = lst->content;
		new->next = NULL;
		lst = tmp;
	}
	return (new);
}
