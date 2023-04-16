/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:54:06 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/25 19:01:41 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*s != '\0')
		s++;
	if ((char)c == '\0')
		return ((char *)s);
	while (tmp - 1 != s)
	{	
		if (*s == (char)c)
			return ((char *)s);
		else
			s--;
	}	
	return (NULL);
}
