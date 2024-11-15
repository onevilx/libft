/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:31:20 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 18:18:16 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}
// int main ()
// {
// 	int *num;
// 	num = (int *)ft_calloc(0, 0);
// 	printf("%p\n", num);
// 	if (!num)
// 	{
// 		printf("mankhdaamsh\n");
// 		return 1;
// 	}
// 	else
// 	printf("mbrok rah khdit blassa\n");
// 	free(num);
// 	return 0;
// }
