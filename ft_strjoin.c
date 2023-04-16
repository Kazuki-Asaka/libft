/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:42:28 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/23 19:45:35 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	char	*tmpsave;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tmp = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (tmp == NULL)
		return (NULL);
	tmpsave = tmp;
	while (*s1 != '\0')
		*tmp++ = *s1++;
	while (*s2 != '\0')
		*tmp++ = *s2++;
	*tmp = '\0';
	return (tmpsave);
}

// int main(void)
// {
// 	char s1[] = "Hello";
// 	char s2[] = "world";
// 	printf("%s", ft_strjoin(s1, s2));
// }