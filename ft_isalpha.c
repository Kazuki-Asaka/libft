/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:42:26 by akazuki           #+#    #+#             */
/*   Updated: 2022/10/12 21:02:09 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if ((65 <= x && x <= 90) || (97 <= x && x <= 122))
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
// 	a = ft_isalpha(string);
// 	printf("%d",a);	
// }