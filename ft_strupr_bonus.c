/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 21:45:04 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/06 17:31:36 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strupr(char *in)
{
	char		*res;
	char		*s_res;

	res = malloc(ft_strlen(in) + 1);
	s_res = res;
	while (*in)
		*(res++) = ft_toupper(*(in++));
	*res = '\0';
	return (s_res);
}
