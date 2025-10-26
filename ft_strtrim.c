/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:59:32 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/25 20:43:07 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char *ft_strdup(const char *s)
{
	char *newstr;
	size_t lens;
	size_t i;

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

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;

	i = 0;
	sub = malloc(len * sizeof(char) + 1);
	if (!(sub))
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}

// int main()
// {
// 	// char *s1 = ft_strdup("0123hello");
// 	// char *s2 = ft_strdup("0143");

// 	//printf("%s\n", ft_strtrim("666puta666", "6876"));
// }
