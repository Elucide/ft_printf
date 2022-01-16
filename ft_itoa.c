/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:14:56 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/16 21:14:58 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

static long	len_n(long n)
{
	long	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*out;
	long	len;
	long	nb;

	nb = (long)n;
	len = len_n(n);
	out = malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	if (n < 0)
	{
		nb *= -1;
		out[0] = '-';
	}
	out[len] = 0;
	if (nb == 0)
		out[0] = '0';
	while (nb > 0)
	{
		len--;
		out[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (out);
}
