/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:19:54 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/30 16:07:50 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	j;
	char	*tmp1;
	char	*tmp2;

	if (dest == NULL && src == NULL)
		return (NULL);
	j = 1;
	tmp1 = (char *)dest;
	tmp2 = (char *)src;
	while (j <= n)
	{
		*tmp1 = *tmp2;
		tmp1++;
		tmp2++;
		j++;
	}
	return (dest);
}

// int main(void)
// {
// 	char str1[128]="abc\0d";
// 	char str2[100]= "abcd";
// 	size_t i;
// 	printf("コピー前　中身の確認\n");
// 	for (i=0; i<7; i++)
// 		printf("%#x ",str1[i]);
// 	printf("\n");
// 	memcpy(str1, str2, 5);

// 	printf("コピー後　中身の確認\n");
// 	for (i=0; i<7; i++)
// 		printf("%#x ",str2[i]);
// 	printf("\n");

// 	char str3[128]="abc\0d";
// 	char str4[100]= "abcd";
// 	printf("コピー前　中身の確認\n");
// 	for (i=0; i<7; i++)
// 		printf("%#x ",str3[i]);
// 	printf("\n");
// 	ft_memcpy(str3, str4, 5);

// 	printf("コピー後　中身の確認\n");
// 	for (i=0; i<7; i++)
// 		printf("%#x ",str4[i]);
// 	printf("\n");

//         return 0;
// }

// int main(void)
// {
// 	char	str1[]
// }