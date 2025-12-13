/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:32:44 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:39:53 by limelo-c         ###   ########.fr       */
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
/*
int main()
{
	int num = 10;
	int num2 = 5;
	t_list *meu_node =  ft_lstnew(&num);
	t_list *meu_node2 =  ft_lstnew(&num2);
	meu_node->next = meu_node2;
	printf("%d<\n", *(int *)meu_node->next->content);
}*/
