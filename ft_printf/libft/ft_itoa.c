/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:27:00 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/12 21:54:55 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static void	aux_itoa(char *res, int n, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		res[size - 1 - i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		sign;
	int		size;

	sign = 1;
	size = countnum(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		sign = -1;
		size++;
		n = -n;
	}
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	aux_itoa(res, n, size);
	res[size] = '\0';
	if (sign == -1)
		res[0] = '-';
	return (res);
}
/*
int main()
{
	int i = -2147483648;
	char *s = ft_itoa(i);
	printf("%s\n", s);
	free(s);
}*/
