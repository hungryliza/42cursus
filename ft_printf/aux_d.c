/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:22:44 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/14 13:41:36 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	countnum(int n)
{
	int	countnum;

	countnum = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		countnum++;
	while (n != 0)
	{
		countnum++;
		n = n / 10;
	}
	return (countnum);
}

int	aux_d(int n)
{
	ft_putnbr_fd(n, 1);
	return (countnum(n));
}
