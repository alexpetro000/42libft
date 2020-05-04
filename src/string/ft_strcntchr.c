/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcntchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:33:52 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 18:32:32 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcntchr(const char *s, char c)
{
	int		cnt;

	if (!s)
		return (0);
	cnt = 0;
	while (*s)
		if (*(s++) == c)
			cnt++;
	return (cnt);
}
