/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:25:18 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/17 11:25:18 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;

	if (!lst || !(*lst) || !del)
		return ;
	current_node = *lst;
	while (current_node != NULL)
	{
		current_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = current_node;
	}
}
