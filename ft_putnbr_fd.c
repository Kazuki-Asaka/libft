/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:18:24 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 19:42:31 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;
	int			i;
	int			j;

	x = n;
	if (x < 0)
	{
		x = -x;
		write(fd, "-", 1);
	}
	i = x / 10;
	j = x % 10;
	if (i != 0)
	{
		ft_putnbr_fd(i, fd);
	}
	j = j + '0';
	write (fd, &j, 1);
}
