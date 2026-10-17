/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:44:27 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/16 13:44:27 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		last = *lst;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
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

	ft_lstadd_back(&head, first);
	ft_lstadd_back(&head, second);

	printf("head content = %s\n", (char *)head->content);
	printf("next content = %s\n", (char *)head->next->content);
	printf("next content = %s\n", (char *)head->next->next->content);

	free(first);
	free(second);
	free(last);
	return (0);
} */
