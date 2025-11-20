/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:11:35 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/14 13:49:17 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	aux_u(unsigned int n)
{
	int	countnum;

	countnum = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else if (n >= 10)
	{
		aux_d(n / 10);
		aux_d(n % 10);
	}
	else
	{
		ft_putchar_fd(n + '0', 1);
	}
	while (n > 0)
	{
		countnum++;
		n = n / 10;
	}
	return (countnum);
}
