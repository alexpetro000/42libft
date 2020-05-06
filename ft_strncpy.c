/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 02:39:11 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 02:13:35 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*d;

	d = dest;
	if (n > 0)
	{
		while (*src && n)
		{
			*(d++) = *(src++);
			n--;
		}
		while (n--)
			*(d++) = '\0';
	}
	return (dest);
}
