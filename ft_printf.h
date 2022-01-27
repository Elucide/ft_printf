/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:17:14 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/27 18:35:55 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include <stdio.h>

int		print_arg(va_list arg, char c);
int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putnbr_hexa(unsigned int b);
int		ft_putnbr_hexa_maj(unsigned int nb);
int		ft_strlen(char *str);
int		print_c(va_list arg);
int		print_d(va_list arg);
int		print_u(va_list arg);
int		print_p(va_list arg);
int		print_pc(void);
int		print_s(va_list arg);
int		print_c(va_list arg);
int		print_x(va_list arg);
int		print_x_maj(va_list arg);
char	*ft_itoa(long n);
char	*ft_utoa(unsigned int n);

#endif
