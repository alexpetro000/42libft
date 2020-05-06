/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 03:32:13 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 04:16:14 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static inline int	calc_len(int n)
{
	int	len;

	len = (n <= 0) ? 1 : 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nn;

	nn = n;
	len = calc_len(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nn < 0)
	{
		s[0] = '-';
		nn = -nn;
	}
	else if (nn == 0)
	{
		s[0] = '0';
	}
	while (nn > 0)
	{
		s[--len] = '0' + nn % 10;
		nn /= 10;
	}
	return (s);
}
