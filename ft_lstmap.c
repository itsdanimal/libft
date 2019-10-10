/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:58:54 by danli             #+#    #+#             */
/*   Updated: 2019/10/04 14:34:30 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (lst == NULL || f == NULL)
		return (NULL);
	node = f(lst);
	if (lst->next)
		node->next = ft_lstmap(lst->next, f);
	else
		node->next = NULL;
	return (node);
}
