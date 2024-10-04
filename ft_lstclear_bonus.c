/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:27:43 by carlopez          #+#    #+#             */
/*   Updated: 2024/09/27 12:29:28 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_temp = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = next_temp;
	}
}
