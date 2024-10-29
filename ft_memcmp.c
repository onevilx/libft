/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:54:03 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/28 11:15:11 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t  i;

    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    i = 0;
    while (i < n)
    {
        if ((unsigned char) str1[i] != (unsigned char) str2[i])
        return ((unsigned char) str1[i] - (unsigned char) str2[i]);    
    }
    return (0);
}
