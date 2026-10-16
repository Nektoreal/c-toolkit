/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:45:06 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/16 12:45:06 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	new->next = *list;
	*list = new;
}

/* int	main(void)
{
	t_list	*head;
	t_list	*first;
	t_list	*second;

	first = ft_lstnew("A");
	second = ft_lstnew("B");

	head = first;

	printf("Before:\n");
	printf("head content = %s\n", (char *)head->content);

	ft_lstadd_front(&head, second);

	printf("After:\n");
	printf("head content = %s\n", (char *)head->content);
	printf("next content = %s\n", (char *)head->next->content);

	free(first);
	free(second);
	return (0);
} */
