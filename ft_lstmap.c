/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:17:43 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/10 18:45:10 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*res_cp;

	if (!lst || !f || !del || !(res = ft_lstnew(f(lst->content))))
		return (NULL);
	res_cp = res;
	lst = lst->next;
	while (lst)
	{
		if (!(res->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&res_cp, del);
			return (NULL);
		}
		lst = lst->next;
		res = res->next;
	}
	return (res_cp);
}
