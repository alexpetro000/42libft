/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcntchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:33:52 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 19:38:28 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcntchr(const char *s, char c)
{
	int		cnt;

	if (!s)
		return (0);
	if (c == '\0')
		return (1);
	cnt = 0;
	while (*s)
		if (*(s++) == c)
			cnt++;
	return (cnt);
}
