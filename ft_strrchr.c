/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 20:20:36 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:05:16 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	j = 0;
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			j = i;
			break ;
		}
		--i;
	}
	if (j > 1)
		return ((char*)(s + j));
	if (s[i] == (char)c)
		return ((char*)(s + i));
	return (NULL);
}
