/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:54:29 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 17:06:00 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	t_list *head;
// 	t_list	*node1 = ft_lstnew("qwer");
// 	t_list	*node2 = ft_lstnew("asdf");
// 	t_list	*node3 = ft_lstnew("zxcv");

// 	node1->next = node2;
// 	head = node1;
// 	while (node1)
// 	{
// 		printf("%s\n", node1->content);
// 		node1 = node1->next;
// 	}
// 	printf("########\n");
// 	ft_lstadd_front(&head, node3);
// 	while (head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}	
// }