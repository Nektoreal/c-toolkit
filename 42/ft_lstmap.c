/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:48:12 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/17 11:48:12 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del_content(void *content)
{
	free(content);
}

void	*map_content(void *content)
{
	char	*src;
	char	*res;

	src = (char *)content;
	res = malloc(2);
	if (!res)
		return (NULL);
	res[0] = src[0] + 1;
	res[1] = '\0';
	return (res);
} */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*new_content;
	t_list	*new_node;

	new_lst = NULL;
	if (!f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/* int	main(void)
{
	t_list	*head;
	t_list	*new_lst;
	t_list	*tmp;

	head = NULL;
	new_lst = NULL;

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("a")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("b")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("c")));

	new_lst = ft_lstmap(head, map_content, del_content);

	printf("Original:\n");
	tmp = head;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	printf("Mapped:\n");
	tmp = new_lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&head, del_content);
	ft_lstclear(&new_lst, del_content);
	return (0);
}
 */
