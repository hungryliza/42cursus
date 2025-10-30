/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:59:59 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/29 21:11:37 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
