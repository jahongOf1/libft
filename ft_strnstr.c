/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:48:25 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:22:06 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *n, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*(char*)n == '\0')
		return ((char*)hs);
	while (hs[i] != '\0' && i < len)
	{
		j = 0;
		while (hs[i + j] == n[j] && hs[i + j] != '\0' && i + j < len)
			j++;
		if (j == ft_strlen(n))
			return ((char*)&hs[i]);
		i++;
	}
	return (NULL);
}
