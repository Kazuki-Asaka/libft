/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:08:16 by akazuki           #+#    #+#             */
/*   Updated: 2022/10/12 20:44:51 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
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
// 	a = ft_isalnum(string);
// 	printf("%d",a);	
// }
