/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:15:16 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/06 21:15:39 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}
// int main()
// {
// 	t_list *node = ft_lstnew("salam");
// 	t_list *node1 = ft_lstnew("cv");
// 	t_list *node2 = ft_lstnew("dazai7omar");

// 	node->next = node1; // before function works
// 	node->next->next = node2;
// 	t_list	*tmp1 = node; 
// 	while (tmp1)
// 	{
// 		printf("%s -> ", tmp1->content);
// 		tmp1 = tmp1->next;
// 	}
// 	printf("################\n"); // after function works

// 	t_list *node3 = ft_lstnew("wa sf ana akhir");
// 	ft_lstadd_back(&node, node3);
// 	t_list *tmp = node;
// 	while (tmp)
// 	{
// 		printf("%s -> ", tmp->content);
// 		tmp = tmp->next;
// 	}	
// }