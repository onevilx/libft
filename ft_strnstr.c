/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:16:19 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/28 11:26:57 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    
    if (needle[0] == 0)
    return ((char *)haystack);
    
    while (haystack[i] && i < len)
    {
        while (haystack [i + j] == needle[j] && haystack [i + j] && i + j < len)
        {
            j++;
            if (needle [j] == 0)
            return ((char *) haystack + i);
        }
        i++;
        j = 0;
    }
    return 0;
}