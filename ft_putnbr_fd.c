/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:48:57 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 22:03:47 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			digit = n + 48;
			write(fd, &digit, 1);
		}
	}
}
// int main()
// {
// 	int fd;
// 	fd = open("putnbr.txt", O_RDWR | O_CREAT, 0777);
// 	ft_putnbr_fd(-2147483648, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(1337, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(-42, fd);
// }