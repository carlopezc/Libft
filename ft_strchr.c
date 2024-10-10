/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:48:28 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/10 12:36:14 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *)s;
	c = (unsigned char)c;
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (p[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
