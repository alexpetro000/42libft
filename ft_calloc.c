/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 01:59:30 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/07 13:51:07 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if ((nmemb && FT_SIZE_MAX / nmemb < size) ||
		(size && FT_SIZE_MAX / size < nmemb))
		return (NULL);
	size *= nmemb;
	if (!(mem = malloc(size)))
		return (NULL);
	return (ft_memset(mem, 0, size));
}
