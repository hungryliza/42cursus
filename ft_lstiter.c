/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:40:38 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:30:26 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	while (lst != NULL)
	{
		next = lst->next;
		f(lst->content);
		lst = next;
	}
}
/*
void	ft_f(void *c)
{
	char *str;
	str = (char *)c;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
}
int main()
{
	char *str = ft_strdup("rsgesrgw");
	char *str1 = ft_strdup("fdfdfd");
	char *str2 = ft_strdup("fdjkh");
	t_list	*lst = ft_lstnew(str);
	t_list	*newnode = ft_lstnew(str1);
	t_list	*newnode1 = ft_lstnew(str2);
	ft_lstadd_back(&lst, newnode);
	ft_lstadd_back(&lst, newnode1);
	ft_lstiter(lst, ft_f);
	while(lst != NULL)
	{
		printf("%s", (char *)lst->content);
		if (lst->next != NULL)
			printf("->");
		lst = lst->next;
	}
}*/
