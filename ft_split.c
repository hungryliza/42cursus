/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:18:02 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/26 22:12:06 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return(i);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

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
char	*count_words(char const *s, char c)
{
	int		i;
	int		j;
	char	*start;

	i = 0;
	j = 0;
	start = "";
	while (s[i])
	{
		while (s[i] != c)
		{
			start[j] = s[i];
			j++;
		}
		i++;
	}
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		sepcounter;
	int		i;
	int		j;
	size_t	lens;
	char	start;
	char	end;

	i = 0;
	j = 0;
	sepcounter = 0;
	lens = ft_strlen(s);
	while (s[i] == c)
	{
		sepcounter++;
		printf("%d", sepcounter);
	}
	splitted = malloc(lens);
	if (!splitted)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			printf("%d", i);
		}
		else
		{
			start = s[i];
			i++;
			printf("%d", start);
			if (s[i] == c)
			{
				end = s[i - 1];
				printf("%d", end);
				i++;
			}
		}
		ft_substr(splitted[j], start, end);
		start++;
		end++;
		j++;
	}
	return (splitted);
}
int main()
{
	char c = ',';
	char *s = "salut,je suis, ta mere";
	// int lens = ft_strlen(s);
	// char **splitted = ft_split("salut,je suis, ta mere", ',');

	// for (int i = 0; i < 3; i++)
	// 	printf("%s\n", splitted[i]);

	printf("%s", count_words(s, c));
}
