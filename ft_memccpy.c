/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 14:31:53 by jahong            #+#    #+#             */
/*   Updated: 2018/09/14 14:53:33 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dcp;
	unsigned char *scp;

	dcp = (unsigned char *)dst;
	scp = (unsigned char *)src;
	while (n > 0)
	{
		*dcp = *scp;
		if (*dcp == (unsigned char)c)
			return (dcp + 1);
		dcp++;
		scp++;
		n--;
	}
	return (NULL);
}
