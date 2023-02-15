/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:19:45 by naadam            #+#    #+#             */
/*   Updated: 2023/02/08 21:19:40 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int dj, int *len, int base)
{
	if (dj == -2147483648)
	{
		*len += write(1, "-2147483648", 11);
		return ;
	}
	if (dj < 0)
	{
		ft_putchar('-', len);
		dj *= -1;
	}
	if (dj >= base)
	{
		ft_putnbru(dj / base, len, base);
		ft_putnbru(dj % base, len, base);
	}
	else
		ft_putchar((dj + 48), len);
}
