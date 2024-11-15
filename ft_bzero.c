/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:28:00 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 21:58:01 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}
/*(int	main()
{
	char str1[] = "this is the end";
	unsigned int n = 0;
	ft_bzero(str1, n);
	printf("after : %s\n", str1);
	return 0;
}*/
// struct a {
// 	int ab;
// 	char c;
// };

// int main()
// {
// 	 char x[] = "1337";
// 	int a;
// 	struct a x;
// 	x.ab = 50;
// 	x.c = 'h';
// 	ft_bzero(&x, sizeof(x));
// 	printf("%d\n", x.ab);
// 	printf("%d\n", x.c);
// }