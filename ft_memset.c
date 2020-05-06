/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:49:10 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/06 03:16:48 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** void		*ft_memset(void *s, int c, size_t n)
** {
** 	unsigned char	*ss;
** 	unsigned char	cc;
**
** 	ss = s;
** 	cc = (unsigned char)c;
** 	while (n--)
** 		*(ss++) = cc;
** 	return (s);
** }
*/

void		*ft_memset(void *s, register int c, register size_t n)
{
	register unsigned char	*ss;
	register unsigned long	cc;

	ss = s;
	while (n && (unsigned long)ss & (sizeof(cc) - 1))
	{
		*(ss++) = c;
		n--;
	}
	if ((cc = (unsigned char)c) && n > sizeof(cc))
	{
		cc = cc | cc << 8;
		cc = cc | cc << 16;
		cc = cc | cc << 32;
	}
	while (n > sizeof(cc))
	{
		*((unsigned long*)ss) = cc;
		ss += sizeof(cc);
		n -= sizeof(cc);
	}
	while (n--)
		*(ss++) = (unsigned char)c;
	return (s);
}
