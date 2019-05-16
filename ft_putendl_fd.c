/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <jahong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 22:54:01 by jahong            #+#    #+#             */
/*   Updated: 2018/11/30 15:39:48 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *endl;

	if (s == NULL)
		return ;
	endl = ft_strjoin(s, "\n");
	ft_putstr_fd(endl, fd);
}
