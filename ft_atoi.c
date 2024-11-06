/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:39:14 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/06 13:56:51 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_whitespaces(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	sign;
	size_t	result;
	size_t	checker;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_whitespaces(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		checker = result;
		result = (result * 10) + (str[i++] - '0');
		if (checker != (result / 10) && sign == 1)
			return (-1);
		if (checker != (result / 10) && sign == -1)
			return (0);
	}
	return (result * sign);
}
