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

void	ft_lstadd_back(t_list **lst, t_list *new) // still segfault notworking :))
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst); // still segfault notworking :))
	if (!last)
		*lst = new;
	last->next = new;
} // still segfault notworking :))