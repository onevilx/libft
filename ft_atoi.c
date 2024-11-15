/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:39:14 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/10 19:17:17 by yaboukir         ###   ########.fr       */
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
	size_t				i;
	long				sign;
	unsigned long long	result;

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
		result = (result * 10) + (str[i++] - '0');
		if (result > LONG_MAX && sign == 1)
			return (-1);
		if (result > LONG_MAX && sign == -1)
			return (0);
	}
	return (sign * result);
}
/*int main ()
{
//------------------------------------------------------------
	char	str[] = "  		 +1234gk45";
	int res = ft_atoi(str);
	int resx = atoi(str);
	printf("%d\n", res);
	printf("%d\n", resx);
//------------------------------------------------------------
//------------------------------------------------------------
	char	str1[] = "  -1234gk45";
	int res1 = ft_atoi(str1);
	int res1x = atoi(str1);
	printf("%d\n", res1);
	printf("%d\n", res1x);
//------------------------------------------------------------
//------------------------------------------------------------
	char	str2[] = "ab1337cc123";
	int res2 = ft_atoi(str2);
	int res2x = atoi(str2);
	printf("%d\n", res2);
	printf("%d\n", res2x);
//------------------------------------------------------------
//------------------------------------------------------------
	char	str3[] = "922337203685477580801234567890098765432112345678900987";
	int res3 = ft_atoi(str3);
	int res3x = atoi(str3);
	printf("%d\n", res3);
	printf("%d\n", res3x);
//------------------------------------------------------------
//------------------------------------------------------------
	char	str4[] = "2147483647";
	int res4 = ft_atoi(str4);
	int res4x = atoi(str4);
	printf("%d\n", res4);
	printf("%d\n", res4x);
//------------------------------------------------------------
//------------------------------------------------------------
	char	str5[] = "-2147483648";
	int res5 = ft_atoi(str5);
	int res5x = atoi(str5);
	printf("%d\n", res5);
	printf("%d\n", res5x);
//------------------------------------------------------------
//------------------------------------------------------------
	char	str6[] = "9223372036854775808";
	int res6 = ft_atoi(str6);
	int res6x = atoi(str6);
	printf("%d\n", res6);
	printf("%d\n", res6x);
//------------------------------------------------------------
}*/