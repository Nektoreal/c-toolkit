/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:12:03 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/16 13:12:03 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;
	t_list			*current_node;

	size = 0;
	current_node = lst;
	while (current_node != NULL)
	{
		size++;
		current_node = current_node->next;
	}
	return (size);
}

/* int	main(void)
{
	t_list	*head;
	t_list	*first;
	t_list	*second;
	t_list	*third;
	unsigned int	size;

	size = 0;

	first = ft_lstnew("C");
	second = ft_lstnew("B");
	third = ft_lstnew("A");

	head = first;

	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, third);


	printf("head content(third) = %s\n", (char *)head->content);
	printf("next content(second) = %s\n", (char *)head->next->content);
	printf("next content(first) = %s\n", (char *)head->next->next->content);

	size = ft_lstsize(head);
	printf("size = %u\n", size);
	free(first);
	free(second);
	free(third);
	return (0);
} */
