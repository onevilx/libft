/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:04:30 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/06 21:11:32 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// int main()
// {
// 	t_list	*node1 = ft_lstnew("qyjty");
// 	t_list	*node2 = ft_lstnew("asd");
// 	t_list	*node3 = ft_lstnew("zxç");
// 	node1->next = node2;
// 	node2->next = node3;
// 	t_list	*res =  ft_lstlast(node1);
// 	printf("%s\n", res->content);
// }