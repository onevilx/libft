/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:12:27 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/08 16:24:18 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_freemal(char **s1, int position, size_t buffer)
{
	int	i;

	i = 0;
	s1[position] = malloc(buffer);
	if (s1[position] == NULL)
	{
		while (i < position)
		{
			free(s1[i++]);
		}
		free(s1);
		return (1);
	}
	return (0);
}

static int	ft_fill(char **s1, const char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (ft_freemal(s1, i, len + 1))
				return (1);
			ft_strlcpy(s1[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

static int	count_word(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**s1;

	if (s == NULL)
		return (NULL);
	words = 0;
	words = count_word(s, c);
	s1 = malloc((words + 1) * sizeof(char *));
	if (s1 == NULL)
		return (NULL);
	s1[words] = NULL;
	if (ft_fill (s1, s, c))
		return (NULL);
	return (s1);
}
