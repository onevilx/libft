/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:05:54 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 22:07:01 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
// 	int fd;
// 	fd = open("main",  O_RDWR| O_CREAT, 0777);
// 	ft_putchar_fd('h', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('o', fd);
// }