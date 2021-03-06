/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_maj.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:02:14 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/27 18:37:05 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x_maj(va_list arg)
{
	int	nb;

	nb = va_arg(arg, unsigned int);
	return (ft_putnbr_hexa_maj(nb));
}
