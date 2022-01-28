/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:47:06 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/28 19:08:23 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putadress(unsigned long long nb)
{
	unsigned long long	n;
	char				*base;
	int					out;

	base = "0123456789abcdef";
	out = 0;
	n = (unsigned long long) nb;
	if (n >= 16)
		out += ft_putadress(n / 16);
	out += write(1, &base[n % 16], 1);
	return (out);
}

int	print_p(va_list arg)
{
	long	nb;

	nb = va_arg(arg, unsigned long);
	if (!nb)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (ft_putadress(nb) + 2);
}
