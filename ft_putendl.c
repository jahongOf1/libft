/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <jahong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:31:49 by jahong            #+#    #+#             */
/*   Updated: 2018/11/30 15:21:43 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char *endl;

	if (s == NULL)
		return ;
	endl = ft_strjoin(s, '\n');
	ft_putstr(endl);
}
