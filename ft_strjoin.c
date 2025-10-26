/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:00:23 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/24 22:54:30 by limelo-c         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (i < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	lens1s2;

	lens1s2 = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc((lens1s2 + 1) * sizeof(char));
	if (!(newstr))
		return (NULL);
	ft_strlcpy(newstr, s1,  ft_strlen(s1) + 1);
	ft_strlcat(newstr, s2, lens1s2);
	return (newstr);
}
int main()
{
	char	s[] = "Ola puta UHUHUHUHUHU";
	char	d[] = "tudo bemUHUHUHUHUHU";
	char	*receive;

	receive = ft_strjoin(s, d);
	printf("%s\n", receive);
	free(receive);
}
