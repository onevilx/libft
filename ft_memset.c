/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:41 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/25 23:03:55 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp_ptr;
    tmp_ptr = (unsigned char *) b;
    while (len > 0)
    {
        *(tmp_ptr++) = (unsigned char) c;
        len--;
    }
    return (b);
}