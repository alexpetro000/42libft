/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:06:35 by afreeze           #+#    #+#             */
/*   Updated: 2020/04/30 23:02:35 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (len < size && dst[len])
		len++;
	if (len < size)
	{
		size--;
		while (len < size && *src)
			dst[len++] = *(src++);
		dst[len] = 0;
	}
	while (*(src++))
		len++;
	return (len);
}
