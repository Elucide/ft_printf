/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:14:56 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/27 17:24:29 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

static long	len_n(unsigned int n)
{
	long	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char			*out;
	long			len;
	long			nb;

	nb = (long)n;
	len = len_n(n);
	out = malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	out[0] = '0';
	while (nb > 0)
	{
		len--;
		out[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (out);
}
