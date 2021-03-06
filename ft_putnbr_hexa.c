/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:51:31 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/28 18:56:37 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned int nb)
{
	char	*hexa;
	long	out;

	out = 0;
	hexa = "0123456789abcdef";
	if (nb > 15)
		out += ft_putnbr_hexa(nb / 16);
	out += write(1, &hexa[nb % 16], 1);
	return (out);
}

int	ft_putnbr_hexa_maj(unsigned int nb)
{
	char	*hexa;
	long	out;

	out = 0;
	hexa = "0123456789ABCDEF";
	if (nb > 15)
		out += ft_putnbr_hexa_maj(nb / 16);
	out += write(1, &hexa[nb % 16], 1);
	return (out);
}
