/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:57:23 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:28:02 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*next;

	ptr = *lst;
	while (ptr != NULL)
	{
		next = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = next;
	}
	*lst = NULL;
}
/*
void	del(void *content)
{
	free(content);
}

int main()
{
	char *str = ft_strdup("rsgesrgw");
	char *str1 = ft_strdup("fdfdfd");
	char *str2 = ft_strdup("5483");
	char *str3 = ft_strdup("str3");
	t_list	*lst = ft_lstnew(str);
	t_list	*newnode = ft_lstnew(str1);
	t_list	*newnode1 = ft_lstnew(str2);
	t_list	*newnode2 = ft_lstnew(str3);
	ft_lstadd_back(&lst, newnode);
	ft_lstadd_back(&lst, newnode1);
	ft_lstadd_front(&lst, newnode2);
	ft_lstclear(&lst, del);
	if (lst == NULL)
		printf("is NULL");
	else
		printf("%s", (char *)lst->content);
}*/
