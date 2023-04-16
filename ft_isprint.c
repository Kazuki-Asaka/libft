/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:17:27 by akazuki           #+#    #+#             */
/*   Updated: 2022/10/15 20:22:11 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
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
// 	a = ft_isprint(string);
// 	printf("%d",a);	
// }