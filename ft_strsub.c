/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 15:06:17 by jahong            #+#    #+#             */
/*   Updated: 2018/11/02 13:47:26 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cp;

	if (s == NULL)
		return (NULL);
	i = start;
	j = 0;
	cp = ft_strnew(len);
	if (cp == NULL)
		return (NULL);
	while (j < len)
		cp[j++] = s[i++];
	return (cp);
}
