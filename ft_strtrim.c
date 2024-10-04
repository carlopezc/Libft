/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:49:56 by carlopez          #+#    #+#             */
/*   Updated: 2024/09/24 18:31:43 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*s2;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	if (i == len)
		return (ft_calloc(1, 1));
	s2 = ft_substr(s1, i, len - i);
	return (s2);
}
