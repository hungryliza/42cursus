/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:00:23 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/13 15:27:49 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	lens1s2;

	if (!s1 || !s2)
		return (NULL);
	lens1s2 = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(lens1s2 * sizeof(char) + 1);
	if (!(newstr))
		return (NULL);
	ft_strlcpy(newstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(newstr, s2, lens1s2 + 1);
	return (newstr);
}
/*
int main()
{
	char	s[] = "Ola puta UHUHUHUHUHU";
	char	d[] = "tudo bemUHUHUHUHUHU";
	char	*receive;

	receive = ft_strjoin(s, d);
	printf("%s\n", receive);
	free(receive);
}*/
