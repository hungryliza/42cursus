/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:56:20 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/04 01:42:04 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list	*lst = NULL;//ft_lstnew("rsgesrgw");
//	t_list	*newnode = ft_lstnew("fdfdfd");
	t_list	*newnode1 = ft_lstnew("5483");
	ft_lstadd_front(&lst, NULL);
	ft_lstadd_front(&lst, newnode1);
	while(lst != NULL)
	{
		printf("%s", (char *)lst->content);
		if (lst->next != NULL)
			printf("->");
		lst = lst->next;
	}
}*/
