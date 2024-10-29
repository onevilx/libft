/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:14:16 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/28 10:22:55 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *pip;
    size_t i;
    unsigned char y;

    pip = (unsigned char *) s;
    y = (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (pip[i] == y)
        return ((void *) &pip[i]);
        i++;
    }
    return (NULL);
}