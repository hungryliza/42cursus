/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:01:44 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/24 00:07:35 by limelo-c         ###   ########.fr       */
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
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (NULL);
}
/*int main()
{
	printf("%s\n", ft_strrchr("dabacad", 'a'));
	printf("%s\n", strrchr("dbac", 97));
}*/
