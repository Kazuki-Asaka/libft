/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:16:31 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/26 13:40:20 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	char	*a;

	a = malloc(sizeof(const char) * ft_strlen(s1) + 1);
	if (a == NULL)
		return (NULL);
	tmp = a;
	while (*s1 != '\0')
	{
		*a = *s1;
		a++;
		s1++;
	}
	*a = '\0';
	return (tmp);
}
