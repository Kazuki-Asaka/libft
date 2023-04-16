/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:04:50 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/27 09:14:39 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_set(char *dest, const char *src \
, size_t dstcount, size_t srclen)
{
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dstcount + srclen);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	// char	*tmp;
	size_t	count;
	size_t	dstcount;
	size_t	src_len;

	count = 0;
	//tmp = dest;
	if (dstsize == 0 || dstsize < ft_strlen(dest))
		return (ft_strlen(src) + dstsize);
	dstcount = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (*dest != '\0')
		dest++;
	if (dstsize - 1 > ft_strlen(src) + dstcount)
		return (ft_set(dest, src, dstcount, src_len));
	else
	{
		while (count + dstcount + 1 < dstsize)
		{
			*dest++ = *src++;
			count++;
		}
		*dest = '\0';
		return (dstcount + src_len);
	}
}

// void	check(size_t num, char *str, char *s2)
// {
// 	printf("check\n");
// 	printf("num: %d\n", num);
// 	printf("str: %s\n", str);
// 	printf("str: %s\n", s2);
// }

// int	main(void)
// {	

// 	char dest1[100] = "012345678901";
// 	char src1[100] = "abcdefghijklm";
// 	char dest2[100] = "012345678901";
// 	char src2[100] = "abcdefghijklm";

// 	ft_strlcat(dest1, src1, 10);
// 	strlcat(dest2, src2, 10);
// 	printf("自作%s\n", dest1);
// 	printf("本家%s\n", dest2);

// }
// #include <string.h>
// int	main(void)
// {
// 	// char src1[100] = "aaaaaa";
// 	// char dest1[100] = "aaaaaa";
// 	// char src2[100] = "aaaaaa";
// 	// char dest2[100] = "aaaaaa";
// 	// unsigned  int	size;
// 	char *dst1 = calloc(100, sizeof(char));
// 	char *dst2 = calloc(100, sizeof(char));
// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 		src1[i] = i + 1;
// 		src2[i] = i + 1;
// 	}
// 	printf("mk: %zu\n", ft_strlcat(dst1, src1, 10));
// 	printf("mk: %s\n", dst1);
// 	printf("or: %zu\n", strlcat(dst2, src2, 10));
// 	printf("or: %s\n", dst2);

// 	return (0);
// }

// #include<string.h>
// int main(void)
// {
// 	char str1[100]= "aiueo";
// 	char str2[100]= "klmnop";
// 	char str3[100]= "aiueo";
// 	char str4[100]= "klmnop";
// 	char str5[100]= "abcdefg";
// 	char str6[100]= "klmnop";
// 	// // size_t i;

// 	// printf("%s\n",strlcat(str1,"aiueo",5));
// 	strlcat(str1, "aiueo",4);
// 	printf("本家%s\n", str1);
// 	// i = ft_strlen(str1);
// 	ft_strlcat(str1, "aiueo", 4);
// 	printf("自作%s\n",str3);
// }

// int main(void)
// {
// 	char str[100] = "12345";
// 	char set[100] = "";

// 	printf("%lu\n",strlcat(str,set, 0));
// 	printf("%s",str);
// }