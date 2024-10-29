/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:02:20 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/28 12:18:59 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *dest;
    size_t i;

    dest = (char *) malloc(ft_strlen(s1) + 1);
    
    if (!dest)
    return (NULL);
    
    i = 0;
    while (s1[i] != '\0')
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}