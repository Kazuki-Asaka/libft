/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:08:28 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/24 18:08:15 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s1, char const *s2)
{
	int			count;
	const char	*tmps2;

	count = 0;
	tmps2 = s2;
	while (*tmps2 != '\0')
	{
		if (*s1 == *tmps2)
		{
			tmps2 = s2;
			count++;
			s1++;
			continue ;
		}
		tmps2++;
	}
	return (count);
}

static int	ft_countback(char const *s1, char const *s2)
{
	int			count;
	char const	*tmps2;

	count = 0;
	tmps2 = s2;
	while (*s1 != '\0')
		s1++;
	s1--;
	while (*tmps2 != '\0')
	{
		if (*s1 == *tmps2)
		{	
			tmps2 = s2;
			count++;
			s1--;
			continue ;
		}
		tmps2++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	char	*tmpsave;
	int		countup;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	countup = 1;
	i = ft_strlen(s1) - ft_count(s1, set) - ft_countback(s1, set);
	if (i < 1)
		return (ft_strdup(""));
	tmp = malloc (sizeof(char) * i + 1);
	if (tmp == NULL)
		return (NULL);
	s1 = s1 + ft_count(s1, set);
	tmpsave = tmp;
	while (countup <= i)
	{
		*tmp++ = *s1++;
		countup++;
	}
	*tmp = '\0';
	return (tmpsave);
}

// int	main(void)
// {
// 	char	s1[100] = "  \t \t \n   \n\n\n\t";
// 	char	set[100] = " \n\t";
// 	// printf ("%d\n", ft_count(s1, set));

// 	printf ("%s",ft_strtrim(s1, set));
// }