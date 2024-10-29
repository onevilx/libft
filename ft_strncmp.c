/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:03:47 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/28 10:09:17 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char)s1[i] != (unsigned char) s2[i])
        return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    return (0);
}