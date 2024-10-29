/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:12:43 by yaboukir          #+#    #+#             */
/*   Updated: 2024/10/28 16:18:37 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    long int checker;
    long int res;

    i = 0;
    res = 0;
    sign = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        sign = -1;
        i++;
    }
    while (str[i] >= 48 && str[i]<= 57)
    {
        checker = res;
        res = res * 10 + (str[i] - 48);
        if (checker != res / 10 && sign == 1)
        return (-1);
        if (checker != res / 10 && sign == -1)
        return (0);
        i++;
    }
    return (sign * res);
}