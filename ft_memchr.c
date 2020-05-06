/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:59:41 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 00:11:39 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*((unsigned char*)s) == (unsigned char)c)
			return ((void*)s);
		s++;
	}
	return (NULL);
}

/*
** void	*ft_memchr(const void *s, int c, size_t n)
** {
**
** 	ss = (unsigned char*)s;
** 	while (n--)
** 		if (*(ss++) == c)
** 			return (ss - 1);
** 	return (NULL);
** }
*/
