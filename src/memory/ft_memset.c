/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:49:10 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 01:41:03 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;

	ss = s;
	cc = (unsigned char)c;
	while (n--)
		*(ss++) = cc;
	return (s);
}

/*
** Optimized version. But -O3 optimizes better(((((
** void		*ft_memset(void *s, register int c, register size_t n)
** {
** 	register unsigned char	*ss;
** 	register size_t			cc;
**
** 	ss = s;
** 	while (n && (size_t)ss & (sizeof(cc) - 1))
** 	{
** 		*(ss++) = c;
** 		n--;
** 	}
** 	if ((cc = (unsigned char)c) && n > sizeof(cc))
** 	{
** 		cc = cc | cc << 8;
** 		cc = cc | cc << 16;
** 		cc = cc | cc << 32;
** 	}
** 	while (n > sizeof(cc))
** 	{
** 		*((size_t*)ss) = cc;
** 		ss += sizeof(cc);
** 		n -= sizeof(cc);
** 	}
** 	while (n--)
** 		*(ss++) = (unsigned char)c;
** 	return (s);
** }
*/
