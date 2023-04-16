/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:38:45 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 19:34:34 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ndptr;

	ndptr = malloc(sizeof(t_list));
	if (ndptr == NULL)
		return (NULL);
	ndptr ->content = content;
	ndptr ->next = NULL;
	return (ndptr);
}
