/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:32:02 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/13 13:34:11 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (size + ft_strlen(src));
	while (dst[i])
		i++;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dstlen);
}
/* int main()
{
	char s[10] = "ddddddd";
	char d[] = "eeeee\0\0\0\0\0\0\0";
	char f[10] = "ddddddd";
	char g[] = "eeeee\0\0\0\0\0\0\0";
	printf("%ld\n", ft_strlcat(d, s, 12));
	printf("%ld\n", strlcat(g, f, 12));
	printf("%s\n", d);
	printf("%s\n", g);
} */
