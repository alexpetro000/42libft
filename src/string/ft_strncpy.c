/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 02:39:11 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/02 04:05:23 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	register char	*d;

	d = dest;
	if (n == 0)
		return (dest);
	while ((*(d++) = *(src++)) && --n)
		;
	while (n--)
		*(d++) = '\0';
	return (dest);
}
