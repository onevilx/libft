/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:03:30 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/03 21:05:26 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			counter;

	counter = (char) c;
	res = (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == counter)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == counter)
		res = (char *) &s[i];
	return (res);
}
