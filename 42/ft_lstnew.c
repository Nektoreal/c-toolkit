/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:29:40 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/16 12:29:40 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* int	main(void)
{
	int		x;
	t_list	*node;

	x = 42;
	node = ft_lstnew(&x);
	if (!node)
		return (1);
	printf("content = %d\n", *(int *)node->content);
	printf("next = %p\n", (void *)node->next);
	free(node);
	return (0);
} */
