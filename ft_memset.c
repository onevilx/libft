/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:41 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/03 17:23:45 by yaboukir         ###   ########.fr       */
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
/*int main()
{
    // char s[] = "HHHH";
    // ft_memset(s, 'x', 2);
    // printf("%s\n", s);
    //output = xxHH
    //____________________________________________
    //int i = 69;
    // ft_memset(&i, 0, 4);
    // ft_memset(&i, 5, 2);
    // ft_memset(&i, 57, 1);
    // printf("{%d}\n", i);
    //output = {1337}
    //____________________________________________
    //int i = 69;
    // ft_memset(&i, 0, 4);
    // ft_memset(&i, 57, 1);
    // ft_memset((char *)&i + 1, 5, 1);
    // printf("{%d}\n", i);
    //output = {-1337}
    //____________________________________________
    //int i = 69;
    //  ft_memset(&i, -1, 4);
    //  ft_memset(&i, -6, 2);
    //  ft_memset(&i, -57, 1);
    //  printf("{%d}\n", i);
    //output = {-1337}
}
*/
