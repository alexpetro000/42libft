/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 02:30:32 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/03 23:59:40 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ss;
	unsigned int	l;

	l = ft_strlen(s);
	if (l < start)
		l = 0;
	else
		l = ft_min(l - start, len);
	ss = malloc(l + 1);
	if (!ss)
		return (NULL);
	ft_memcpy(ss, s + start, l);
	ss[l] = '\0';
	return (ss);
}
