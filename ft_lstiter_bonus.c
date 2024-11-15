/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:56:28 by yaboukir          #+#    #+#             */
/*   Updated: 2024/11/15 16:37:03 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
// void	f(void *content)
// {
// 	free(content);
// 	content = ft_strdup("0");
// }
// int main ()
// {
// 	int i =	0;
// 	t_list	*head;
// 	head = NULL;
// 	while (i <= 9)
// 	{
// 		t_list *node1 = ft_lstnew((ft_itoa(i)));
// 		ft_lstadd_back(&head, node1);
// 		i++;
// 	}
// 	t_list *tmp = head;
// 	while(tmp)
// 	{
// 		printf("%s -> ", tmp->content);
// 		tmp = tmp->next;
// 	}
// 	t_list *hmar = head;
// 	printf("\n$$$$$$$$$$$################$$$$$$$$$$\n");
// 	while (hmar)
// 	{
// 		ft_lstiter(hmar, f);
// 		printf(" %s ->", hmar->content);
// 		hmar = hmar->next;
// 	}
// }
