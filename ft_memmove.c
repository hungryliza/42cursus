/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:45:13 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/22 23:53:56 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmp;

	i = 0;
	while (i < n)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = tmp[i];
		i++;
	}
}
/*int main()
{
	char d[40] = "newstring";
	ft_memmove(d + 1, d, 3);
	printf("%s\n", d);
	//memmove(d + 1, d, 3);
	//printf("%s\n", d);
}*/
