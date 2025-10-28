/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:27:00 by limelo-c          #+#    #+#             */
/*   Updated: 2025/10/28 01:52:59 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int countnum(int n)
{
	int count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

void	aux_itoa(char *res, int n, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		res[size - 1 - i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
}

char *ft_itoa(int n)
{
	char *res;
	int sign;
	int size;

	sign = 1;
	size = countnum(n);
	if (n == 0)
		return ("0");
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
int main()
{
	printf("%s\n", ft_itoa(-385739857));
}
