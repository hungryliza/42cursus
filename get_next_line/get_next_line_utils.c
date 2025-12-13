/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:10:57 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/24 20:19:15 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

void	buff_move(char *buff)
{
	int	i;
	int	j;

	i = ft_strlen(buff);
	j = 0;
	while (buff[i])
	{
		buff[j] = buff[i];
		i++;
		j++;
	}
	buff[j] = '\0';
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstr;
	size_t	l1;
	size_t	l2;
	size_t	lens1s2;

	l1 = 0;
	l2 = 0;
	lens1s2 = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(lens1s2 + 1);
	if (!newstr)
		return (free(s1), NULL);
	while (s1 && s1[l1])
		newstr[l2++] = s1[l1++];
	l1 = 0;
	while (s2[l1])
	{
		newstr[l2++] = s2[l1];
		if (s2[l1++] == '\n')
			break ;
	}
	newstr[lens1s2] = '\0';
	free(s1);
	return (newstr);
}
