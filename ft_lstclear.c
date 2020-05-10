/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:08:46 by afreeze           #+#    #+#             */
/*   Updated: 2020/05/10 18:30:06 by afreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	cur = *lst;
	while (cur)
	{
		del(cur->content);
		tmp = cur;
		cur = cur->next;
		free(tmp);
	}
	*lst = NULL;
}
