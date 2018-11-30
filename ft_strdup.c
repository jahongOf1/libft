/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:10:15 by jahong            #+#    #+#             */
/*   Updated: 2018/09/13 20:24:05 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	size_t	len;
	char	*copy;

	i = 0;
	len = ft_strlen(s1);
	copy = (char*)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (s1[i])
	{
		copy[i] = (char)s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
