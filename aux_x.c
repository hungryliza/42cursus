/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:07:07 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/14 15:49:46 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	aux_x(unsigned int n)
{
	char				*base;
	int					countnum;
	unsigned int		numsave;

	countnum = 0;
	numsave = n;
	base = "0123456789abcdef";
	if (n == 0)
		return (ft_putchar_fd('0', 1), 1);
	if (n >= 16)
		aux_x(n / 16);
	ft_putchar_fd(base[n % 16], 1);
	while (numsave != 0)
	{
		countnum++;
		numsave = numsave / 16;
	}
	return (countnum);
}
