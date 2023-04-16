/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:25:55 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/24 18:04:45 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_getlen(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*p;
	char		*tmp;
	int			count;
	long int	x;

	x = (long int)n;
	count = ft_getlen (n);
	p = malloc (sizeof(char) * (count + 1));
	if (p == NULL)
		return (NULL);
	*(p + count) = '\0';
	tmp = p;
	if (x < 0)
	{
		*p = '-';
		x = -x;
	}
	p = p + count - 1;
	while (x / 10 != 0)
	{
		*p-- = x % 10 + '0';
		x = x / 10;
	}
	*p = x + '0';
	return (tmp);
}

// int main(void)
// {
// 	// printf("%s\n", ft_itoa(-120));
// 	// printf("%s\n", ft_itoa(-454));
// 	// printf("%s\n", ft_itoa(123));
// 	printf("%s\n", ft_itoa(-2147483648));
// }