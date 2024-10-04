/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:32:35 by carlopez          #+#    #+#             */
/*   Updated: 2024/09/25 20:10:41 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_num(int n)
{
	size_t	num;

	num = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		num++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		num++;
	}
	num++;
	return (num);
}

static unsigned int	ft_putnum_max(char *num, int n)
{
	unsigned int	is;

	is = 0;
	if (n == -2147483648)
	{
		num[0] = '-';
		num[1] = '2';
		num[2] = '1';
		num[3] = '4';
		num[4] = '7';
		num[5] = '4';
		num[6] = '8';
		num[7] = '3';
		num[8] = '6';
		num[9] = '4';
		num[10] = '8';
		num[11] = '\0';
		is = 1;
	}
	return (is);
}

static void	ft_fill_array(int n, char *num, int len)
{
	int	sign;

	if (ft_putnum_max(num, n) == 1)
		return ;
	if (n == 0)
	{
		num[0] = '0';
		num[len] = '\0';
		return ;
	}
	sign = 0;
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
		sign = 1;
	}
	num[len] = '\0';
	while (--len >= sign)
	{
		num[len] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;

	len = ft_count_num(n);
	num = (char *)malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	ft_fill_array(n, num, len);
	return (num);
}
