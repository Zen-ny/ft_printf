/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:13:31 by naadam            #+#    #+#             */
/*   Updated: 2023/02/08 21:17:44 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int dj, int *len, unsigned int base)
{
	if (dj >= base)
	{
		ft_putnbru(dj / base, len, base);
		ft_putnbru(dj % base, len, base);
	}
	else
		ft_putchar((dj + 48), len);
}
