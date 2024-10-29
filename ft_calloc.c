/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:31:20 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/28 12:02:15 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t  i;

    i = 0;
    tmp = malloc(count * size);
    
    if (!tmp)
    return (NULL);
    
    while (i < count * size)
    tmp[i++] = 0;
    
    return (tmp);
}