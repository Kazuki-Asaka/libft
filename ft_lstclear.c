/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:09:15 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 19:32:25 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ndptr;
	t_list	*tmp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	else
	{
		ndptr = *lst;
		while (ndptr != NULL)
		{
			tmp = ndptr -> next;
			ft_lstdelone(ndptr, del);
			ndptr = tmp;
		}
		*lst = NULL;
	}
}

// typedef struct s_
// {
// }	t_list

// t_list lst1;

// t_list *ptr = &lst1
// t_list **ptr;