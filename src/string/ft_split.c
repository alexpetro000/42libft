/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:29:45 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/07 13:44:07 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t		cnt;
	char		is_start;

	is_start = 1;
	cnt = 0;
	while (*s)
		if (*(s++) != c)
		{
			if (is_start)
				cnt++;
			is_start = 0;
		}
		else
			is_start = 1;
	return (cnt);
}

static char		*ft_strndup_local(const char *s, size_t len)
{
	size_t	l;
	char	*dup;

	l = ft_strlen(s);
	if (len < l)
		l = len;
	if (!(dup = malloc(l + 1)))
		return (NULL);
	ft_memcpy(dup, s, l);
	dup[l] = '\0';
	return (dup);
}

static char		copy_words(char **arr, const char *s, char c)
{
	const char	*world_start;
	size_t		word_i;

	world_start = 0;
	word_i = 0;
	while (*s)
	{
		if (*s != c && !world_start)
			world_start = s;
		s++;
		if (world_start && (*s == c || *s == '\0'))
		{
			arr[word_i] = ft_strndup_local(world_start, s - world_start);
			if (!arr[word_i++])
			{
				while (--word_i)
					free(arr);
				return (0);
			}
			world_start = 0;
		}
	}
	arr[word_i] = NULL;
	return (1);
}

char			**ft_split(char const *s, char c)
{
	char		**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char*) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	if (!copy_words(arr, s, c))
		return (NULL);
	return (arr);
}
