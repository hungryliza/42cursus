/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:40:39 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/30 22:12:43 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!new || !lst)
		return ;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
void	del(void*lst)
{
	lst->next = lst;
}
int main()
{
	t_list	*lst = ft_lstnew("rsgesrgw");
	t_list	*newnode = ft_lstnew("fdfdfd");
	t_list	*newnode1 = ft_lstnew("5483");
	ft_lstadd_back(&lst, newnode);
	ft_lstadd_back(&lst, newnode1);
	ft_lstdelone(newnode, del);
	while(lst != NULL)
	{
		printf("%s", (char *)lst->content);
		if (lst->next != NULL)
			printf("->");
		lst = lst->next;
	}
}
