/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:22:57 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/29 21:22:52 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(((unsigned char *)s1)[i] && i < n - 1)
	{
		i++;
	}
	if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] > 0)
		return (1);
	else if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] == 0)
		return (0);
	else
		return (-1);
}
/*
int main()
{
	printf("%d\n", ft_memcmp("abcdz", "abcde", 5));
	printf("%d\n", memcmp("abcdz", "abcde", 5));
}*/
