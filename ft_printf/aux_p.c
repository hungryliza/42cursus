/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:55 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/14 16:10:03 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	aux_aux_p(unsigned long long ptr)
{
	char					*base;
	int						countnum;
	unsigned long long		numsave;

	countnum = 0;
	numsave = ptr;
	base = "0123456789abcdef";
	if (ptr >= 16)
		aux_aux_p(ptr / 16);
	ft_putchar_fd(base[ptr % 16], 1);
	while (numsave != 0)
	{
		countnum++;
		numsave = numsave / 16;
	}
	return (countnum);
}

int	aux_p(unsigned long long ptr)
{
	if (!ptr)
		return (ft_putstr_fd("(nil)", 1), 5);
	else
	{
		ft_putstr_fd("0x", 1);
		return (aux_aux_p(ptr) + 2);
	}
}
