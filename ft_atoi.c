/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 00:47:41 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/07 02:07:23 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	ft_isspace_atoi(int c)
{
	return (('\t' <= c && c <= '\r') || c == ' ');
}

int					ft_atoi(const char *s)
{
	unsigned int	result;
	unsigned int	last_result;
	char			sign;

	result = 0;
	sign = 1;
	while (ft_isspace_atoi(*s))
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
		last_result = result;
		result = result * 10 + (*(s++) - '0');
		if (last_result > result)
			return (sign > 0 ? -1 : 0);
	}
	return (result * sign);
}
