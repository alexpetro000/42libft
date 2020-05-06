/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:29:45 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 23:16:45 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static inline int	count_words(const char *s, char c)
{
	int		cnt;
	char	is_start;

	is_start = 1;
	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (is_start)
				cnt++;
			is_start = 0;
		}
		else
			is_start = 1;
		s++;
	}
	return (cnt);
}

static char			*copy_word(char **arr, const char *s, unsigned int len)
{
	char			*word;

	if (!(word = malloc(len + 1)))
		return (NULL);
	ft_memcpy(word, s - len, len);
	word[len] = '\0';
	*arr = word;
	return (word);
}

char				**ft_split(char const *s, char c)
{
	char			**arr;
	char			**arr_cp;
	unsigned int	word_len;

	if (!s || !(arr = malloc(sizeof(char**) * (count_words(s, c) + 1))))
		return (NULL);
	arr_cp = arr;
	word_len = 0;
	while (1)
	{
		if (*s != c && *s)
			word_len++;
		else if (word_len)
		{
			if (!copy_word(arr++, s, word_len))
				return (NULL);
			word_len = 0;
		}
		if (!*(s++))
			break ;
	}
	*arr = NULL;
	return (arr_cp);
}
