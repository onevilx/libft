/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:17:48 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/21 20:42:24 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*tmp_src;
	char		*tmp_dst;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	tmp_src = (const char *) src;
	tmp_dst = (char *) dst;
	i = 0;
	if (tmp_dst > tmp_src)
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
// int main()
// {
// 	char str1[] = "is this the end";
// 	//char str2[5];
// 	char *res = ft_memmove(NULL, NULL, 0);
// 	printf("%s\n", res);
// 	return 0;
// }
