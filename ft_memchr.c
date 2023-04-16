/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:43:20 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 19:36:46 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp;
	size_t				i;

	i = 1;
	tmp = s;
	while (i <= n)
	{
		if (*tmp == (unsigned char)c)
			return ((void *)tmp);
		i++;
		tmp++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
// 	const unsigned char str1[100]= "abcdefg";
// 	char str2[100]= "klmnop";
// 	const unsigned char str3[100]= "abcdefg";
// 	char str4[100]= "klmnop";
// 	char str5[100]= "abcdefg";
// 	char str6[100]= "klmnop";

// 	// size_t i;
// 	memchr(str1, 99,2);
// 	printf("本家%s\n", str1);
// 	// i = ft_strlen(str1);
// 	ft_memchr(str3, 99, 2);
// 	printf("自作%s\n",str3);
// 	strncpy(str5,str6,5);
// 	printf("n試験%s\n",str5);

// 	// char c[256] = "42tokyo";
// 	// ft_strlcpy(NULL , "aiueo", 0);
// 	// printf("%zu\n", ft_strlcpy(NULL , "aiueo", 0));
// 	// ft_strlcpy(NULL , "aiueo", 2);
// 	// printf("%zu\n", ft_strlcpy(NULL , "aiueo", 2));
// 	// ft_strlcpy(c, NULL, 0);
// 	// printf("%zu\n", ft_strlcpy(NULL, NULL, 2));	
// }