/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:42:31 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/11 20:14:31 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count = 1;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	nb;
	size_t		len;
	char		*str;

	nb = n;
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	len = int_len(nb) + 1;
	str = malloc(len);
	if (!str)
		return (NULL);
	str[len - 1] = '\0';
	if (nb == 0)
		str[0] = '0';
	else if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		str[--len - 1] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
/*int main()
{
//------------------------------------------------------------
	int number = 1337;
	char *str = ft_itoa(number);
	printf("%s\n", str);
//------------------------------------------------------------
//------------------------------------------------------------
	int number1 = -2147483648;
	char *str1 = ft_itoa(number1);
	printf("%s\n", str1);
//------------------------------------------------------------
//------------------------------------------------------------
	int number2 = -42;
	char *str2 = ft_itoa(number2);
	printf("%s\n", str2);
//------------------------------------------------------------
}*/