/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:32:43 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:13:55 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int main()
{
	t_list	*lst = ft_lstnew("rsgesrgw");
	t_list	*newnode = ft_lstnew("fdfdfd");
	t_list	*newnode1 = ft_lstnew("5483");
	ft_lstadd_front(&lst, newnode);
	ft_lstadd_front(&lst, newnode1);
	printf("%d", ft_lstsize(lst));
}*/
