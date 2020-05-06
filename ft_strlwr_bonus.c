/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlwr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 22:06:44 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/06 17:31:49 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strlwr(char *in)
{
	char		*res;
	char		*s_res;

	res = malloc(ft_strlen(in) + 1);
	s_res = res;
	while (*in)
		*(res++) = ft_tolower(*(in++));
	*res = '\0';
	return (s_res);
}
