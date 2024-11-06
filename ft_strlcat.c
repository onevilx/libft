/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:21:31 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/06 21:56:03 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (s[i] == '\0')
			return (i);
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strnlen(dst, dstsize);
	i = 0;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (dstsize > 0)
	{
		while (src[i] && dst_len + i < dstsize - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

// int main(void)
// {
// 	char chi7aja[100] = "khouyayousseflmimaaaaaa ";
//  printf("%zu\n", strlcat("NULL", NULL, 0));
// 	printf("%zu\n", strlcat(chi7aja, "khoyazakarialmima", 80)); //cipalojik
// 	puts(chi7aja);
//  printf("%zu\n", ft_strlcat(NULL, "NULL", 0));
// 	char *hello = NULL;
// 	printf("%s\n", hello[0]);
// }