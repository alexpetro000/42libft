/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:56:52 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/02 01:37:42 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*((unsigned char*)dest) = *((unsigned char*)src);
		if (*((unsigned char*)src) == (unsigned char)c)
			return ((void*)dest + 1);
		src++;
		dest++;
	}
	return (NULL);
}
