/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:03:35 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/26 16:42:29 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(va_list arg)
{
	int	nb;

	nb = va_arg(arg, int);
	if (nb < 0)
		return (write(1, "ffffffff", 8));
	return (ft_putnbr_hexa(nb));
}
