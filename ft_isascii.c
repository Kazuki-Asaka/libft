/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:14:23 by akazuki           #+#    #+#             */
/*   Updated: 2022/10/12 20:44:50 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// #include<stdio.h>
// int main(void)
// {
// 	int string;
// 	int 	a;
// 	string = 41;
// 	a = ft_isascii(string);
// 	printf("%d",a);	
// }