/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:57:23 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/02 20:42:50 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list *next;

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
void	del(void *content)
{
	free(content);
}
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
char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	lens;
	size_t	i;

	i = 0;
	lens = ft_strlen(s);
	newstr = malloc(lens + 1);
	if (!(newstr))
		return (NULL);
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return(i);
}
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
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
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
		new = *lst;
	new->next = *lst;
	*lst = new;
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
}
