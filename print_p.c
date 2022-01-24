/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:47:06 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/24 11:09:32 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(va_list arg)
{
	long	nb;

	nb = va_arg(arg, long);
	if (!nb)
		return (write(1, "(null)", 6));
	write(1, "0x", 1);
	return (ft_putnbr_hexa(nb) + 2);
}
