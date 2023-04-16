/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:50:32 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 19:37:46 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tmps1;
	const unsigned char	*tmps2;
	size_t				i;

	tmps1 = s1;
	tmps2 = s2;
	i = 1;
	while (i <= n)
	{
		if (*tmps1 != *tmps2)
			return (*tmps1 - *tmps2);
		i++;
		tmps1++;
		tmps2++;
	}
	return (0);
}

// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
//     const unsigned char buf1[100] = "\0adc\0de";
//     const unsigned char buf2[100] = "\0abc\0de";
//     const unsigned char buf3[100] = "\0abcdef";
//     if (memcmp(buf1, buf2, 7) == 0)
//              printf("buf1 = buf2\n");
//      else
//                printf("buf1 != buf2\n");

//     if (memcmp(buf1, buf3, 7) == 0)
//              printf("buf1 = buf3\n");
//      else
//                 printf("buf1 != buf3\n");
// 	const unsigned char buf4[100] = "\0adc\0de";      
//     const unsigned char buf5[100] = "\0abc\0de";
//     const unsigned char buf6[100] = "\0abcdef";

//      if (ft_memcmp(buf4, buf5, 7) == 0)
//             printf("buf4 = buf5\n");
//     else
//             printf("buf4 != buf5\n");

//     if (ft_memcmp(buf4, buf6, 7) == 0)
//             printf("buf4 = buf6\n");
//      else
//             printf("buf4 != buf6\n");
// 	return (0);
// }