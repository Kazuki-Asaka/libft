/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:17:13 by akazuki           #+#    #+#             */
/*   Updated: 2022/11/24 18:52:30 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*tmp_haystack;
	const char	*tmp_needle;

	tmp_needle = needle;
	tmp_haystack = haystack;
	if (haystack == NULL && *needle && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	if (ft_strlen (haystack) < len)
		len = ft_strlen(haystack);
	while (*tmp_haystack != '\0' && tmp_haystack < (haystack + len))
	{
		tmp_needle = needle;
		while (*tmp_haystack == *tmp_needle && tmp_haystack < (haystack + len))
		{
			tmp_haystack++;
			tmp_needle++;
		}
		tmp_haystack = tmp_haystack - (tmp_needle - needle);
		if (*tmp_needle == '\0' || tmp_needle - 1 == needle + ft_strlen(needle))
			return ((char *)(tmp_haystack));
		tmp_haystack++;
	}
	return (NULL);
}

// {
// 	const char	*tmp;
// 	size_t		i;

// 	tmp = haystack;
// 	if (haystack == NULL && needle && len == 0)
// 		return (NULL);
// 	if (*needle == '\0')
// 		return ((char *)haystack);
// 	while (*haystack != '\0' && (size_t)(haystack - tmp) < len)
// 	{
// 		i = 0;
// 		
// 			i++;
// 		if (*(needle + i) == '\0')
// 			return ((char *)haystack);
// 		haystack++;
// 	}
// 	return (NULL);
// }	

// #include<string.h>
// int main(void)
// {
// 	char *ptr = NULL;
// 	ptr = NULL
// 	*ptr
// 	char c = 'a'; //0xafasdfds
// 	ptr = &c;
// 	ptr
// 	printf("'%s",ft_strnstr("abcd",NULL,0));
// 	printf("%s",strnstr(NULL, "jdsaj",0));
// }

// int	main(void)
// {
// 	ft_strnstr("A", "A" );
// }

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	i = 0;
// 	if (!haystack && *needle && !len)
// 		return (NULL);
// 	if (!*needle)
// 		return ((char *)haystack);
// 	while (haystack[i] && i < len)
// 	{
// 		j = 0;
// 		while (haystack[i + j] == needle[j] && i + j < len)
// 			j++;
// 		if (needle[j] == '\0')
// 			return ((char *)&haystack[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// int	main(void)
// {
// 	char *str = "libfttest";
// 	// int	len = strlen(str);

// 	// for (int i = 0; i < len + 1; i++)
// 	// {
// 	// 	printf("%d\tft_strnstr = %s\tstrnstr = %s\n", i, ft_strns
// 	// }

// 	printf("%s\n",ft_strnstr("libfttest", "libfttest", -1));
// 	// printf("%s\n", strnstr("libfttest", "libfttest", 3));
// }
