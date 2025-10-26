/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:25:31 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/24 20:50:51 by limelo-c         ###   ########.fr       */
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
/*
int main()
{
	char s[] = "hihihi";

	char *new = ft_strdup(s);
	printf("%s", new);
	free(new);

}*/
