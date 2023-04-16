/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:37:27 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 19:39:29 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp1;
	char	*tmp2;
	size_t	i;

	tmp1 = (char *)dest;
	tmp2 = (char *)src;
	i = 0;
	if (dest < src && n != 0)
	{
		while (i++ < n)
			*tmp1++ = *tmp2++;
	}
	else if (dest > src && n != 0)
	{
		while (i++ < n - 1)
		{
			tmp1++;
			tmp2++;
		}
		while (i-- > 0)
			*tmp1-- = *tmp2--;
	}
	else
		return (dest);
	return (dest);
}

// int	main(void)
// {
// 	// char dst1[] = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
// 	// char dst2[] = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
// 	int size = 50;

// 	char *dst1 = malloc(100);
// 	char *dst2 = malloc(100);
// 	memmove(dst1, dst1 + 21, size);
// 	ft_memmove(dst2, dst2 + 21, size);
// 	printf("memmove: %s\n", dst1);
// 	printf("ft_memmove: %s\n", dst2);
// 	printf("%d\n", memcmp(dst1, dst2, 98));
// }

// int main(void)
// {
// 	char str1[100]= "abcdefg";
// 	char str2[100]= "12345";
// 	ft_memmove(str1, str2, 3);
// 	printf("%s\n", str1);

// 	char str3[100]= "abcdefg";
// 	char str4[100]= "12345";
// 	memmove(str3, str4,3);
// 	printf("%s\n",str3);
// }
// #include        <stdio.h>
// #include        <string.h>
// int main(void)
// {
//         char str1[] = "abcdefghijklmnopqrstu";
//         printf("移動前：%s\n",str1);
//         memmove(str1+5, str1, 10);        /* 重複エリアのコピー */
//         printf("移動後：%s\n",str1);
// 		char str2[] = "abcdefghijklmnopqrstu";
// 		ft_memmove(str2+5, str2, 10);
// 		printf("移動後：%s\n",str2);
//         return 0;
// }

// void	ft_exit(char *str)
// {
// 	printf("Exit: %s\n", str);
// 	exit(0);
// }

// void	check_memmove(void *dst, void *src, size_t size)
// {
// 	void	*expected = malloc(size);

// 	memmove(expected, src, size);

// 	ft_memmove(dst, src, size);
// 	//ASSERT_EQ_MEM(dst, expected, size);
// 	if (expected)
// 		free(expected);
// }

// int	main(void)
// {
// 	char *src = malloc(100);
// 	for (int i = 0; i < 100; i++)
// 		src[i] = i;
// 	char *dst = malloc(100);
// 	/* 1 */ check_memmove(dst, src, 0);
// 	/* 2 */ check_memmove(dst, src, 10);
// 	/* 2 */ check_memmove(dst, src, 100);
// 	/* 3 forward overlap */ check_memmove(dst + 42, dst, 50);
// 	/* 4 backward overlap*/ check_memmove(dst, dst + 21, 50);
// 	return (0);
// }

// int main(void)
// {

// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 68, 67, 68, 69, 0, 45};

// 	printf("%s\n",ft_memmove(sResult + 1, sResult, 2));
// 	printf("%s", memmove(sResult2 + 1, sResult2, 2));
// }

//