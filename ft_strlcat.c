/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:21:31 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 22:00:56 by yaboukir         ###   ########.fr       */
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
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	if (dstsize > 0)
	{
		while (src[i] && (dst_len + i < dstsize - 1))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

// int main()
// {
// 	char dst[] = "hello jgt799f9t7yghutucvygbhjfyc gihobouhvbp";
// 	char src[] = "this is the end";
// 	printf("%zu\n", ft_strlcat(dst, src, 15));
// 	return 0;
// }