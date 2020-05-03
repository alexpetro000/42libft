/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 16:14:10 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 01:24:56 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char*)dest;
	s = (char*)src;
	if (s == d)
	{
		return (dest);
	}
	else if (s < d)
	{
		while (n--)
			((char*)d)[n] = ((char*)s)[n];
	}
	else
	{
		while (n--)
			*((char*)d++) = *((char*)s++);
	}
	return (dest);
}
