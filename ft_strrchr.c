/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:28:21 by carlopez          #+#    #+#             */
/*   Updated: 2024/09/27 13:50:25 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*p;
	int				i;
	int				j;

	i = 0;
	j = -1;
	c = (unsigned char)c;
	p = (unsigned char *)s;
	while (p[i] != '\0')
	{
		if (p[i] == c)
			j = i;
		i++;
	}
	if (j >= 0)
		return ((char *)&s[j]);
	if (p[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
