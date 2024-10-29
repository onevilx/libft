/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:17:48 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/28 21:18:36 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char *tmp_src;
    char *tmp_dst;
    size_t  i;
    
    if (!dst || !src)
    return (NULL);
    
    tmp_src = (char *) src;
    tmp_dst = (char *) dst;
    i = 0;
    
    if (tmp_dst > tmp_src)
    while (len-- > 0)
    tmp_dst[len] = tmp_src[len];
    
    else
    {
        while (i++ < len)
        tmp_dst[i] = tmp_src[i];
    }
    return (dst);
}