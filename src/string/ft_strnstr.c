/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:34:07 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 02:27:32 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ss;

	if (*little == '\0')
		return ((char*)big);
	ss = NULL;
	while (len-- && *big)
	{
		if (*big == *little)
		{
			if (!ss)
				ss = big;
			if (*++little == '\0')
				return ((char*)ss);
		}
		else if (ss)
		{
			little -= big - ss;
			len += big - ss;
			big = ss;
			ss = NULL;
		}
		big++;
	}
	return (NULL);
}
