/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:29:45 by carlopez          #+#    #+#             */
/*   Updated: 2024/09/23 20:20:11 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*aux_list;

	if (!list)
		return (NULL);
	aux_list = list;
	while (aux_list->next)
		aux_list = aux_list->next;
	return (aux_list);
}
