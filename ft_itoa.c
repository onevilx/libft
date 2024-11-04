/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:42:31 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/04 18:15:03 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*pre_conv(int len)
{
	char	*tmp;

	tmp = (char *)ft_calloc(1, len + 1);
	if (!tmp)
		return (NULL);
	return (tmp);
}

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		len;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = pre_conv(len);
	if (!result)
		return (NULL);
	i = len - 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
		result[0] = '-';
	}
	if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		result[i--] = ((nbr % 10) + '0');
		nbr = nbr / 10;
	}
	return (result);
}
