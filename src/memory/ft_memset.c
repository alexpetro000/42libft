/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:49:10 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/01 04:41:39 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, register size_t n)
{
	register unsigned char	*ss;
	register unsigned char	cc;

	cc = (unsigned char)c;
	ss = (unsigned char*)s;
	while (n--)
		*ss = cc;
	return (s);
}
