/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:02:29 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/29 21:21:24 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*res;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb * size > __SIZE_MAX__)
		return (malloc(0));
	res = malloc(nmemb * size);
	ft_bzero(res, nmemb * size);
	if (!(res))
		return (NULL);
	return (res);
}
/*
int main()
{
	int *b = ft_calloc(7, sizeof(size_t));

	for (int i = 0; i < 7; i++)
		printf("%d", b[i]);
	free(b);
}*/
