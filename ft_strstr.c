/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:25:22 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:17:48 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hs, const char *n)
{
	size_t i;
	size_t j;

	i = 0;
	if (*(char*)n == '\0')
		return ((char*)hs);
	while (hs[i] != '\0')
	{
		j = 0;
		while (hs[i + j] == n[j] && hs[i + j] != '\0')
			j++;
		if (j == ft_strlen(n))
			return ((char*)&hs[i]);
		i++;
	}
	return (NULL);
}
