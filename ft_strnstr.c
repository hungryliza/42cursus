/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:59:59 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/24 01:12:23 by limelo-c         ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lilsize;
	size_t	i;

	i = 0;
	lilsize = ft_strlen(little);
	if (!(little))
		return ((char *)big);
	while (big[i] && i < len)
	{
		if(!(ft_strncmp(big, little, lilsize)))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
/*
int main()
{
	printf("%s", ft_strnstr("abcdefghij", "bcd", 5));
}*/
