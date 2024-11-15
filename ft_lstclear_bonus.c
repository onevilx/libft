/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:02:34 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 17:51:14 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}
// void	del(void *content)
// {
// 	del(content);
// }
// int main()
// {
// 	t_list *node = ft_lstnew("hello");
// 	t_list *node1 = ft_lstnew("asat");
// 	t_list *node2 = ft_lstnew("hani?");

// 	node->next = node1;
// 	node->next->next = node2;
// 	while(node)
// 	{
// 		printf(" %s ->", node->content);
// 		node = node->next;
// 	}
// 	printf("\n######################\n");
// 	ft_lstclear(&node, del);
// 	t_list *tmp = node;
// 	while(tmp)
// 	{
// 		printf(" %s ->\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }