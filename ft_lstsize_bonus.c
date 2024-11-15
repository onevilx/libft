/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:50:59 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 20:58:44 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	if (!tmp)
		return (0);
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
// int main()
// {
// 	int i = 0;
// 	t_list	*head;
// 	head = NULL;
// 	while(i <= 9)
// 	{
// 		t_list *node = ft_lstnew(ft_strdup("hhhh"));
// 		ft_lstadd_back(&head, node);
// 		i++;
// 	}
// 	t_list *tmp = head;
// 	while (tmp)
// 	{
// 		printf(" %s ->", tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("\n##########################\n");
// 	int	size = ft_lstsize(head);
// 	printf("size of nodes are : %d\n",size);
// }