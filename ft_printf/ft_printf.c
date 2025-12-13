/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:09:47 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/14 17:09:25 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion(const char *str, va_list *args)
{
	int	len;

	len = 0;
	if (*str == 'c')
		len += aux_c(va_arg(*args, int));
	else if (*str == 's')
		len += aux_s(va_arg(*args, char *));
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		len++;
	}
	else if (*str == 'd' || *str == 'i')
		len += aux_d(va_arg(*args, int));
	else if (*str == 'u')
		len += aux_u(va_arg(*args, int));
	else if (*str == 'x')
		len += aux_x(va_arg(*args, int));
	else if (*str == 'X')
		len += aux_toupperx(va_arg(*args, int));
	else if (*str == 'p')
		len += aux_p(va_arg(*args, unsigned long long));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += conversion(str, &args);
		}
		else
		{
			ft_putchar_fd(*str, 1);
			len++;
		}
		str++;
	}
	return (len);
}
/* int main()
{
	int smth = printf("%x\n", 0);
	int whatualrhavher = ft_printf("%x\n", 0);
	printf("%d\n", smth);
	printf("%d\n", whatualrhavher);
	// int me = printf("%p\n", (void *)__LONG_MAX__);
	// int u = ft_printf("%p\n", (void *)__LONG_MAX__);
	// printf("%d\n", me);
	// printf("%d\n", u);
} */
