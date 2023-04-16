/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:23:55 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/25 19:02:40 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	char			*save;
	size_t			i;
	size_t			n;

	i = 0;
	n = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen((const char *)s) || len == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		tmp = malloc (sizeof(char) * (ft_strlen(s) - start) + 1);
	else
		tmp = (char *)malloc (sizeof(char) * len + 1);
	if (tmp == NULL)
		return (NULL);
	save = tmp;
	while (i++ < start)
		s++;
	while (n++ < len && *s != '\0')
		*tmp++ = *s++;
	*tmp = '\0';
	return (save);
}

// #include<string.h>
// int main(void)
// {
// 	//char const str[100] = "libft-test-tokyo";
// 	char *str = "tripouille";
// 	char *str1 = "tripouille";
// 	size_t	len;
// 	size_t	lem;

// 	printf("%s\n",ft_substr(str,0,100));
// 	len = strlen(ft_substr(str1,0,100));
// 	lem = strlen(str);
// 	printf("len ; %lu, lem ; %lu\n", len, lem);
// 	// printf("%s\n",str);

// 	printf("%s\n",ft_substr(str,0,100));
// 	// printf("%s\n",str);

// 	printf("%s",ft_substr(str,10,100));
// 	// printf("%s\n",str);
// }
