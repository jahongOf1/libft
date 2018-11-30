/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 14:11:54 by jahong            #+#    #+#             */
/*   Updated: 2018/09/14 14:29:33 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*dcp;
	unsigned char	*scp;

	i = 0;
	dcp = (unsigned char *)dst;
	scp = (unsigned char *)src;
	while (i < n)
	{
		dcp[i] = scp[i];
		i++;
	}
	return (dst);
}
