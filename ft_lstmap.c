/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 22:36:42 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 02:29:00 by limelo-c         ###   ########.fr       */
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
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
		new = *lst;
	new->next = *lst;
	*lst = new;
}

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
void	*ft_f(void *c)
{
	char *str;
	char *start;

	str = (char *)c;
	start = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	return (start);
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
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
void	del(void *content)
{
	free(content);
}
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return(i);
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
}
