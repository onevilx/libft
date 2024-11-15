/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:27:32 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 16:49:33 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void	del(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	t_list *node = ft_lstnew(ft_itoa(-42));
// 	printf("%s\n", node->content);
// 	ft_lstdelone(node, del);
// 	printf("%s\n", node->content);
// }