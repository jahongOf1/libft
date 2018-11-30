/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 20:08:16 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:32:51 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long long	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == '\f' || str[i] == '\v' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\t' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		neg = (int)(',' - str[i]);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = (num * 10) + ((unsigned long long)(str[i] - '0'));
		i++;
	}
	return (int)(neg * num);
}
