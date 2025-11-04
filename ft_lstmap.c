/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 22:36:42 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:30:40 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_f(void *c)
{
	char	*str;
	char	*start;

	str = (char *)c;
	start = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	return (start);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*next;
	t_list	*ftcont;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst != NULL)
	{
		next = lst->next;
		ftcont = f(lst->content);
		node = ft_lstnew(ftcont);
		ft_lstadd_back(&newlst, node);
		lst = next;
	}
	return (newlst);
}
/*
void	del(void *content)
{
	free(content);
}

int main()
{
	t_list	*newlst = NULL;
	char *str = ft_strdup("rsgesrgw");
	char *str1 = ft_strdup("fdfdfd");
	char *str2 = ft_strdup("fdjkh");
	t_list	*lst = ft_lstnew(str);
	t_list	*newnode = ft_lstnew(str1);
	t_list	*newnode1 = ft_lstnew(str2);
	ft_lstadd_back(&lst, newnode);
	ft_lstadd_back(&lst, newnode1);
	newlst = ft_lstmap(lst, ft_f, del);
	while(newlst != NULL)
	{
		printf("%s", (char *)newlst->content);
		if (newlst->next != NULL)
			printf("->");
		newlst = newlst->next;
	}
}*/
