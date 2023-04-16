/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:37:49 by akazuki           #+#    #+#             */
/*   Updated: 2022/10/20 20:51:41 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

void	*ft_memset(void *buf, int ch, size_t	n)
{
	size_t	i;
	char	*tmp;

	tmp = buf;
	i = 1;
	while (i <= n)
	{
		*tmp = ch;
		tmp++;
		i++;
	}
	return (buf);
}

// int	main(void)
// {
// 	int ch;
// 	size_t n;
// 	char str[100] = "0123456789";
// 	ch = '*';
// 	n = 5;
// 	memset(str+2, ch, n);
// 	printf("%s\n",str);
// }