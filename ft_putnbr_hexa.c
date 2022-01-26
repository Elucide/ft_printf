/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:51:31 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/26 16:37:32 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(long long nb)
{
	char	*hexa;
	long	out;

	if (nb < -9223372036854775807)
		return (write(1, "8000000000000000", 16));
	out = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		out++;
		nb *= 1;
	}
	hexa = "0123456789abcdef";
	if (nb > 15)
		out += out + ft_putnbr_hexa(nb / 16);
	out += write(1, &hexa[nb % 16], 1);
	return (out);
}

int	ft_putnbr_hexa_maj(long long nb)
{
	char	*hexa;
	long	out;

	if (nb < -9223372036854775807)
		return (write(1, "8000000000000000", 16));
	out = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		out++;
		nb *= 1;
	}
	hexa = "0123456789ABCDEF";
	if (nb > 15)
		out += out + ft_putnbr_hexa(nb / 16);
	out += write(1, &hexa[nb % 16], 1);
	return (out);
}
