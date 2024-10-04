/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:53:44 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/01 13:08:39 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux_list;
	t_list	*cpy;
	t_list	*aux_cpy;

	if (!lst || !f)
		return (NULL);
	aux_list = lst;
	cpy = ft_lstnew(f(aux_list->content));
	if (!cpy)
		return (NULL);
	aux_list = aux_list->next;
	aux_cpy = cpy;
	while (aux_list)
	{
		aux_cpy->next = ft_lstnew(f(aux_list->content));
		if (!aux_cpy->next)
		{
			ft_lstclear(&cpy, del);
			return (NULL);
		}
		aux_list = aux_list->next;
		aux_cpy = aux_cpy->next;
	}
	return (cpy);
}
