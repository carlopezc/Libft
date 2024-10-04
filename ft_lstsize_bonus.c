/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:07:04 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/04 13:21:08 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	t_list	*aux_list;
	int		i;

	i = 0;
	if (!list)
		return (0);
	aux_list = list;
	while (aux_list)
	{
		aux_list = aux_list->next;
		i++;
	}
	return (i);
}
