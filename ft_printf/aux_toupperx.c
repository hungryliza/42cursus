/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_toupperx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 23:21:30 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/14 15:54:59 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_toupper(char c, int fd)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		write(fd, &c, 1);
	}
	else
		write(fd, &c, 1);
}

int	aux_toupperx(unsigned int n)
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
		aux_toupperx(n / 16);
	ft_putchar_toupper(base[n % 16], 1);
	while (numsave != 0)
	{
		countnum++;
		numsave = numsave / 16;
	}
	return (countnum);
}
