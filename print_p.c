/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:47:06 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/27 18:59:18 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putadress(unsigned long nb)
{
	char	*hexa;
	long	out;

	out = 0;
	hexa = "0123456789abcdef";
	if (nb > 15)
		out += out + ft_putnbr_hexa(nb / 16);
	out += write(1, &hexa[nb % 16], 1);
	return (out);
}

int	print_p(va_list arg)
{
	long long	nb;

	nb = va_arg(arg, long);
	if (!nb)
		return (write(1, "(nil)", 5));
	if (nb < 0)
		nb += 9223372036854775807;
	write(1, "0x", 2);
	return (ft_putadress(nb) + 2);
}
