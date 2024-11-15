/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:41 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 21:24:57 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}

// int main()
// {
// 	char x[] = "1337";
// 	ft_memset(x, '4', 1);
// 	ft_memset(x + 1, '2', 1);
// 	ft_memset(x + 2, '\0', 1);
// 	printf("%s\n", x);
// }
