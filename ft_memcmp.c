/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:54:03 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/11 20:33:38 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*int	main()
{
	char str1[] = "yousomean";
	char str2[] = "yousomean";
	char str3[] = "yousomean";
	int res = ft_memcmp(str1, str2, 10);
	int res1 = ft_memcmp(str2, str3, 10);
	int res2 = ft_memcmp(str1, str3, 10);
	if (res == 0)
		printf("boooorgiiir yuuumyyy (it is equal)\n");
	else
		printf("not equal in the memory\n");
	if (res1 == 0)
		printf("boooorgiiir yuuumyyy\n");
	else
		printf("not equal in the memory\n");
	if (res2 == 0)
		printf("boooorgiiir yuuumyyy\n");
	else
		printf("not equal in the memory\n");
	return 0;
}*/