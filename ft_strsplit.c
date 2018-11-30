/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 15:51:57 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:18:31 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		counting_words(char const *s, char c)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c && ((s[i + 1] == c) || (s[i + 1] == 0)))
			counter++;
		i++;
	}
	return (counter);
}

static char		*string_extract(char const *s, char c)
{
	char	*return_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j] != c && s[j] != '\0')
		j++;
	return_str = ft_strsub(s, i, j);
	return (return_str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		string_count;
	char	**return_array;
	int		word_counter;

	if (s == NULL)
		return (NULL);
	string_count = 0;
	word_counter = counting_words(s, c);
	return_array = (char**)malloc(sizeof(char*) * (word_counter + 1));
	if (!return_array)
		return (NULL);
	return_array[word_counter] = NULL;
	while (string_count < word_counter && *s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			return_array[string_count] = string_extract(s, c);
			string_count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (return_array);
}
