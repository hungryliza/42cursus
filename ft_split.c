/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:18:02 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:26:07 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		word++;
		i++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

char	*def_word(char const *s, char c)
{
	int		i;
	int		end;
	char	*word;

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
	int		lenwords;

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
	char	s[30] = ",,,yes,fff,vvv,,,";
	char	c = ',';
	char	**splitted = ft_split(s, c);
	char	**ptr = splitted;
	while (*ptr != NULL)
	{
		printf("%s\n", *ptr);
		ptr++;
	}
	for(size_t i = 0; splitted[i] != NULL ; i++)
	{
		free(splitted[i]);
	}
	free(splitted);
}*/
