/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:21:16 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/29 21:22:26 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1)
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int main()
{
	printf("%s\n", (char *)ft_memchr("dbac", 'a', 4));
	printf("%s\n", (char *)memchr("dbac", 'a', 4));
}*/
