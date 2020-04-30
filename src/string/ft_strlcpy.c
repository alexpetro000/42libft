/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 20:25:51 by afreeze           #+#    #+#             */
/*   Updated: 2020/04/30 21:05:53 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = 0;
	while (++src_len < size && *src)
		*(dst++) = *(src++);
	if (size)
		*dst = '\0';
	while (*(src++))
		src_len++;
	return (src_len - 1);
}
