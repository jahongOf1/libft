/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 15:34:27 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:34:42 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	i;
	int j;

	if (s == NULL)
		return (NULL);
	j = (int)ft_strlen(s) - 1;
	i = 0;
	while ((s[i] == '\t' || s[i] == '\n' || s[i] == ' ') && s[i])
		i++;
	while ((s[j] == '\t' || s[j] == '\n' || s[j] == ' ') && j > i
			&& s[j])
		j--;
	return (ft_strsub(s, i, (j - i + 1)));
}
