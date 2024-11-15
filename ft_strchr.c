/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:13:59 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/12 20:58:33 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			y;

	if (s == NULL)
		return (NULL);
	y = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == y)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == y)
		return ((char *) &s[i]);
	return (NULL);
}
/*int main()
{
	char str[] = "easy peasy lemon sqeueezy";
	char *res = ft_strchr(str, 'y');
	printf("%s\n", res);
}*/