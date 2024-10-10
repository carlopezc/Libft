/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:15:29 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/10 12:33:13 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p_char;
	size_t			i;

	i = 0;
	p_char = (unsigned char *)s;
	while (i < n)
	{
		p_char[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
