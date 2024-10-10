/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:00:01 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/10 12:32:40 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_char;
	unsigned char		*src_char;

	i = 0;
	dest_char = (unsigned char *)dest;
	src_char = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest_char < src_char)
	{
		while (i < n)
			dest_char[i] = src_char[i++];
	}
	else
	{
		while (n-- > 0)
			dest_char[n] = src_char[n];
	}
	return (dest);
}
