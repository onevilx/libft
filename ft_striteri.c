/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:31:01 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/12 23:04:48 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_upcase(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 'a' + 'A';
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// int main()
// {
// 	char str[] = "im so greatful";
// 	ft_striteri(str, ft_upcase);
// 	printf("%s\n", str);
// 	return 0;
// }