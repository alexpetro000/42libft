/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 02:01:07 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/04 00:23:47 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*mem;

	len = ft_strlen(s);
	mem = malloc(len + 1);
	if (!mem)
		return (NULL);
	return (ft_memcpy(mem, s, len + 1));
}
