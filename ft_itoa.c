/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:38:31 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:34:12 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length_of_int(int n)
{
	int count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n /= 10)
		count++;
	return (count);
}

static char	*int_min_str(int n)
{
	char *str;

	str = NULL;
	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		neg;

	neg = 0;
	count = 0;
	count = length_of_int(n);
	str = ft_strnew(count);
	if (n == -2147483648)
		return (int_min_str(n));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (count--)
	{
		str[count] = (char)((n % 10) + '0');
		n = n / 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
