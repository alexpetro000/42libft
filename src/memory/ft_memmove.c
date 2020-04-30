/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 16:14:10 by afreeze           #+#    #+#             */
/*   Updated: 2020/04/30 20:06:29 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	d = dest;
	if (src <= dest)
		while (n--)
			((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
	else
		while (n--)
			*((unsigned char*)dest++) = *((unsigned char*)src++);
	return (d);
}
