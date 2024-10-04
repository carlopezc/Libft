/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:47:27 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/03 13:46:54 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big_char;
	char	*lit_char;

	i = 0;
	j = 0;
	big_char = (char *)big;
	lit_char = (char *)little;
	if (lit_char[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (lit_char[j] && lit_char[j] == big_char[i + j] && (j + i) < len)
			j++;
		if (!lit_char[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
