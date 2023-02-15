/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:36:16 by naadam            #+#    #+#             */
/*   Updated: 2023/02/08 21:15:29 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cases(const char *dj, int *len, va_list args)
{
	if (*dj == 'c')
		ft_putchar(va_arg(args, int), len);
	if (*dj == 's')
		ft_putstr(va_arg(args, char *), len);
	if (*dj == 'd' || *dj == 'i')
		ft_putnbr(va_arg(args, int), len, 10);
	if (*dj == 'X' || *dj == 'x')
		ft_hex(va_arg(args, unsigned int), len, 16, (char *)dj);
	if (*dj == 'u')
		ft_putnbru(va_arg(args, unsigned int), len, 10);
	if (*dj == 'p')
	{
		*len += write(1, "0x", 2);
		ft_ptr(va_arg(args, unsigned long), len, 16);
	}
	if (*dj == '%')
		*len += write(1, "%", 1);
	return ;
}
