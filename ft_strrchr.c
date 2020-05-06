/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:30:51 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 02:27:52 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *ss, int c)
{
	const char	*save;

	save = NULL;
	while (*ss)
	{
		if (*ss == c)
			save = ss;
		ss++;
	}
	if (*ss == c)
		save = ss;
	return ((char*)save);
}
