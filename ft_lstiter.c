/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:40:38 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/02 22:34:09 by limelo-c         ###   ########.fr       */
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
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return(i);
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
}
