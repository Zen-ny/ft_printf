/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:09:20 by naadam            #+#    #+#             */
/*   Updated: 2023/02/08 21:15:56 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned int hd, int *len, unsigned int base, const char *dj)
{
	char	*hex;
	char	*hex_l;

	hex_l = "0123456789abcdef";
	hex = "0123456789ABCDEF";
	if (*dj == 'x')
		hex = hex_l;
	if (hd >= base)
	{
		ft_hex(hd / base, len, base, dj);
		ft_hex(hd % base, len, base, dj);
	}
	else
		ft_putchar(hex[hd], len);
}
