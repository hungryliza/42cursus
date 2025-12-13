/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:15:27 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:15:42 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list	*lst = ft_lstnew("rsgesrgw");
	t_list	*newnode = ft_lstnew("fdfdfd");
	t_list	*newnode1 = ft_lstnew("5483");
	ft_lstadd_front(&lst, newnode);
	ft_lstadd_front(&lst, newnode1);
	t_list	*newnode2 = ft_lstlast(lst);
	printf("%s", (char *)newnode2->content);
}*/
