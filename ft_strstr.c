/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:52:45 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 02:59:29 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	const char	*ss;

	if (*little == '\0')
		return ((char*)big);
	ss = NULL;
	while (*big)
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
			big = ss;
			ss = NULL;
		}
		big++;
	}
	return (NULL);
}
