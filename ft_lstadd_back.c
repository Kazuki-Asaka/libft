/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:47:36 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 18:42:44 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ndptr;

	if (new == NULL)
		return ;
	ndptr = ft_lstlast(*lst);
	if (ndptr == NULL)
		*lst = new;
	else
		ndptr -> next = new;
}
