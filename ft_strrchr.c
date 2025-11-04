/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:01:44 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/04 01:43:39 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (1)
	{
		if (s[len] == c)
		{
			return ((char *)&s[len]);
		}
		if (len == 0)
			break;
		len--;
	}
	return (NULL);
}
/*int main()
{
	printf("%s\n", ft_strrchr("dabacad", 'a'));
	printf("%s\n", strrchr("dbac", 97));
}*/
