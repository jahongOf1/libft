/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 14:58:10 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:05:36 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dcp;
	unsigned char	*scp;

	dcp = (unsigned char *)dst;
	scp = (unsigned char *)src;
	if (scp < dcp)
	{
		while (len--)
			dcp[len] = scp[len];
	}
	else
		ft_memcpy(dcp, scp, len);
	return (dcp);
}
