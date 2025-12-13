/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 01:05:29 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/03 20:02:05 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		res;
	int		signal;

	i = 0;
	res = 0;
	signal = 1;
	while (nptr[i] == '\r' || nptr[i] == ' ' || nptr[i] == '\f'
		|| nptr[i] == '\v' || nptr[i] == '\n' || nptr[i] == '\t')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		signal *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - 48;
		i++;
	}
	return (res * signal);
}
/*
int main()
{
	printf("%d", ft_atoi("+-42"));
}*/
