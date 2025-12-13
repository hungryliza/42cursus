/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:55:49 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/13 16:04:54 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (i < ft_strlen(s))
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	printer_fx(unsigned int i, char *d)
{
	printf("%d ", i);
	printf("%s\n", d);
}
int main()
{
	ft_striteri("dih", printer_fx);
}*/
