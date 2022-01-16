/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:51:31 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/16 21:14:30 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(long nb)
{
	char	*hexa;
	int		out;

	if  (nb < 0)
	{
		write(1, '-', 1);
		out++;
		nb *= 1;
	}
	hexa = "0123456789abcdef";
	if (n > 15)
		out += out + ft_putnbr_hexa(n / 16);
	out += write(1, hexa[n % 16]);
	return (out);
}

int	ft_putnbr_hexa_maj(long nb)
{
	char	*hexa;
	int		out;

	if  (nb < 0)
	{
		write(1, '-', 1);
		out++;
		nb *= 1;
	}
	hexa = "0123456789ABCDEF";
	if (n > 15)
		out += out + ft_putnbr_hexa(n / 16);
	out += write(1, hexa[n % 16]);
	return (out);
}

