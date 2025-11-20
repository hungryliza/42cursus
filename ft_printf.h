/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:33:01 by limelo-c          #+#    #+#             */
/*   Updated: 2025/11/14 17:09:34 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	aux_c(int c);
int	aux_s(char *str);
int	aux_d(int n);
int	aux_u(unsigned int n);
int	aux_x(unsigned int n);
int	aux_toupperx(unsigned int n);
int	aux_p(unsigned long long ptr);

#endif
