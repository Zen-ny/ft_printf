/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:00:07 by naadam            #+#    #+#             */
/*   Updated: 2023/02/08 19:45:32 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr(unsigned long dj, int *len, unsigned long int base)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (dj >= base)
	{
		ft_ptr(dj / base, len, base);
		ft_ptr(dj % base, len, base);
	}
	else
		ft_putchar(hex[(unsigned long) dj], len);
}
