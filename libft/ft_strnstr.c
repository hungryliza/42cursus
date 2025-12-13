/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:59:59 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/07 00:26:27 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lilsize;
	size_t	i;

	i = 0;
	lilsize = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	while (*big && i + lilsize <= len)
	{
		if (!(ft_strncmp(big, little, lilsize)))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
/* int main()
{
	char *s1 = "AAAAAAAAA";
	//char *s2 = "MZ";

	size_t max = strlen(s1);

	printf("%s", ft_strnstr(s1, s1, max));
} */
