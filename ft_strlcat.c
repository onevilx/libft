/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:21:31 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/25 23:31:11 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  src_len;
    size_t  dst_len;
    
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len >= dstsize)
    dst_len = dstsize;

    if (dst_len == dstsize)
    return (dstsize + src_len);
    
    if (src_len < dstsize - dst_len)
    ft_memcpy(dst + dst_len, src, src_len + 1);

    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }
    return (dst_len + src_len);
}