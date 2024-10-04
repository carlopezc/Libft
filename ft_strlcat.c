/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:23:47 by carlopez          #+#    #+#             */
/*   Updated: 2024/09/27 19:32:53 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	j = len_dst;
	if (size <= j)
		return (ft_strlen(src) + size);
	while (j < size -1 && src[i])
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (len_dst + ft_strlen(src));
}
