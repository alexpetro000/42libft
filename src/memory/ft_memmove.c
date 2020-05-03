/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 16:14:10 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/02 22:11:57 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, register size_t n)
{
	register char	*d;
	register char	*s;

	d = (char*)dest;
	s = (char*)src;
	if (s == d)
	{
		return (dest);
	}
	else if (s < d)
	{
		s = (char*)s + n - 1;
		d = (char*)d + n - 1;
		while (n--)
			*((char*)d--) = *((char*)s--);
	}
	else
	{
		while (n--)
			*((char*)d++) = *((char*)s++);
	}
	return (dest);
}
