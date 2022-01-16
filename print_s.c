/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:31:21 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/16 20:31:41 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_str(va_list arg)
{
	char	*str;
	
	str = va_arg(arg, char *);
	if (!str)
		return (write(1, "(null)", 6));
	return (write(1, &str, ft_strlen(str)));
}
