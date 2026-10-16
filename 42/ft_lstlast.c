/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:32:13 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/16 13:32:13 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	current_node = lst;
	if (!lst)
		return (NULL);
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	return (current_node);
}
/* int	main(void)
{
	t_list	*head;
	t_list	*first;
	t_list	*second;
	t_list	*last;
	t_list	*node;

	first = ft_lstnew("A");
	second = ft_lstnew("B");
	last = ft_lstnew(NULL);
	head = last;

	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, first);

	printf("head content = %s\n", (char *)head->content);
	printf("next content = %s\n", (char *)head->next->content);
	printf("next content = %s\n", (char *)head->next->next->content);

	node = ft_lstlast(head);
	printf("last node :%s\n", (char *)node->content);

	free(first);
	free(second);
	free(last);
	return (0);
} */
