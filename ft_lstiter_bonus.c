/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:13:21 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/01 09:58:00 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux_lst;

	aux_lst = lst;
	if (!f || !lst)
		return ;
	while (aux_lst)
	{
		f(aux_lst->content);
		aux_lst = aux_lst->next;
	}
}
