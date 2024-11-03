/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:12:12 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/03 21:09:32 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	maxlen;
	size_t			start;
	size_t			end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	maxlen = (end - start + 1);
	return (ft_substr(s1, start, maxlen));
}

// int main()
// {
//     char *str = "hhhntahhhasathhrakhhmridhhhhh";
//     char *set = "hh";

//     printf("%s\n", ft_strtrim(str, set));
// }
