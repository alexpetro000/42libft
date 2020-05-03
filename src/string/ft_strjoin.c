/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 03:26:14 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/03 21:29:27 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*ss;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ss = malloc(s1_len + s2_len + 1);
	if (!ss)
		return (NULL);
	ft_strcpy(ss, s1);
	ft_strcpy(ss + s1_len, s2);
	return (ss);
}
