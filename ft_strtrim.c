/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:12:12 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/06 12:50:17 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	maxlen;
	size_t			start;
	size_t			end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (end > 0 && ft_strchr(set, s1[end]) && end >= 0)
		end--;
	maxlen = (end - start + 1);
	if (maxlen <= 0)
		return (ft_strdup(""));
	return (ft_substr(s1, start, maxlen));
}

// int main()
// {
//     char *str = NULL;
//     char *set = NULL;
//     printf("%s\n", ft_strtrim(str, set));	
// }
