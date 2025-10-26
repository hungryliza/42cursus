/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:18:02 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/26 19:40:32 by limelo-c         ###   ########.fr       */
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
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		sepcounter;
	int		i;
	int		j;
	size_t	lens;

	i = 0;
	j = 0;
	sepcounter = 0;
	lens = ft_strlen(s);
	while (s[i] == c)
		sepcounter++;
	splitted = malloc(lens * sepcounter * sizeof(char));
	if (!splitted)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		ft_strlcpy(splitted[j], s, 40);
		j++;
	}
	return (splitted);
}
int main()
{
	char c = ',';
	char *s = "salut,je suis, ta mere";
	int lens = ft_strlen(s);
	char **splitted = ft_split(s, c);

	for (int i = 0; i < lens; i++)
		printf("%s\n", splitted[i]);
}
