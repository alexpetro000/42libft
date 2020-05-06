/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 00:47:41 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 02:39:13 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	long			result;
	char			sign;
	unsigned char	cnt;

	result = 0;
	cnt = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (*s == '-')
	{
		s++;
		sign = -1;
	}
	else if (*s == '+')
		s++;
	while (ft_isdigit(*s))
	{
		if (++cnt > 18)
			return (sign > 0 ? -1 : 0);
		result = result * 10 + (*(s++) - '0');
	}
	return (result * sign);
}
