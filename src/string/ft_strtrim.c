/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:50:40 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 03:25:01 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*mem;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (!*s1)
		return (ft_strdup(""));
	start = (char*)s1;
	while (*s1)
		s1++;
	while (ft_strchr(set, *(--s1)))
		;
	mem = malloc(s1 - start + 2);
	if (!mem)
		return (NULL);
	ft_memcpy(mem, start, s1 - start + 1);
	mem[s1 - start + 1] = 0;
	return (mem);
}
