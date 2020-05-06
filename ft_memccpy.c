/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:56:52 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 01:31:46 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dd;
	unsigned char	*ss;

	dd = (unsigned char*)dest;
	ss = (unsigned char*)src;
	while (n--)
		if ((*(dd++) = *(ss++)) == (unsigned char)c)
			return (dd);
	return (NULL);
}
