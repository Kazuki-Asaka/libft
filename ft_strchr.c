/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:38:04 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 19:44:37 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((char)c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	if (*s != '\0')
	{
		while (*s != '\0')
		{
			if (*s == (char)c)
				return ((char *)s);
			else
				s++;
		}
		return (NULL);
	}
	else
		return (NULL);
}

// #include<stdio.h>
// int main(void)
// {
// 	char str[100] = "asdfrtgyhujiko";
// 	int	i;

// 	i = 97;
// 	ft_strchr(str, i);
// 	printf("%p", i);
// }