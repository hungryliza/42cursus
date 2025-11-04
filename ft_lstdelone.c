/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:40:39 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:27:50 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

void	del(void *content)
{
	free(content);
}
/*
int main()
{
	char *str = ft_strdup("rsgesrgw");
	t_list	*lst = ft_lstnew(str);
	t_list	*newnode = ft_lstnew("fdfdfd");
	t_list	*newnode1 = ft_lstnew("5483");
	ft_lstadd_back(&lst, newnode);
	ft_lstadd_back(&lst, newnode1);
	if (lst != NULL)
	{
		t_list *delete = lst;
		lst = lst->next;
		ft_lstdelone(delete, del);
	}
	while(lst != NULL)
	{
		printf("%s", (char *)lst->content);
		if (lst->next != NULL)
			printf("->");
		lst = lst->next;
	}
}*/
