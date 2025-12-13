/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:18:02 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/13 19:06:21 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			word++;
			i++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

static char	*def_word(char const *s, char c)
{
	size_t		i;
	size_t		end;
	char		*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	end = i;
	word = ft_substr(s, 0, end);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	**ptr;
	size_t	lenwords;

	if (!s)
		return (NULL);
	lenwords = count_words(s, c);
	arr = malloc((lenwords + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	ptr = arr;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			*ptr = def_word(s, c);
			while (*s && *s != c)
				s++;
			ptr++;
		}
	}
	*ptr = NULL;
	return (arr);
}
/*
int main()
{
	//char *s= "emanuel gabriel 42";
	char **test = ft_split(NULL, ' ');
	int i = 0;

	if (test == NULL)
	{
		printf("rip");
		return 0;
	}
	while (test[i])
	{
		printf("%s", test[i]);
		i++;
	}
	 int j = 0;
	while (j < i)
	{
		free(test[j++]);
	}
	free (test);
}
*/
