/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:17:43 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/06 00:14:49 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*res_cp;
	t_list	*tmp;

	if (!f || !del || !lst || !(tmp = f(lst->content)))
		return (NULL);
	res = ft_lstnew(tmp);
	res_cp = res;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp = f(lst->content)))
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		res->next = ft_lstnew(tmp);
		res = res->next;
	}
	return (res_cp);
}
