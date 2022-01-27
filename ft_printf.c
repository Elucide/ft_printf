/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:17:00 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/27 17:21:11 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_arg(va_list arg, char c)
{
	int	out;

	out = 0;
	if (c == 'c')
		out = print_c(arg);
	else if (c == 's')
		out = print_s(arg);
	else if (c == 'p')
		out = print_p(arg);
	else if (c == 'd')
		out = print_d(arg);
	else if (c == 'i')
		out = print_d(arg);
	else if (c == 'u')
		out = print_u(arg);
	else if (c == 'x')
		out = print_x(arg);
	else if (c == 'X')
		out = print_x_maj(arg);
	else if (c == '%')
		out = print_pc();
	else
		return (-1);
	return (out);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		out;

	va_start(arg, str);
	out = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			out += write(1, &str[i], 1);
		else
		{
			out += print_arg(arg, str[i + 1]);
			i++;
		}
		i++;
	}
	return (va_end(arg), out);
}
