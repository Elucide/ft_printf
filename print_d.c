/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:15:35 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/24 12:21:41 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(va_list arg)
{
	int		n;
	char	*str;
	int		len;

	n = va_arg(arg, int);
	str = ft_itoa(n);
	len = ft_strlen(str);
	write(1, str, len);
	return (free(str), len);
}
