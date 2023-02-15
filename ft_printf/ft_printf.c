/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:36:31 by naadam            #+#    #+#             */
/*   Updated: 2023/02/10 17:59:44 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *dj, ...)
{
	int		len;
	va_list	args;

	va_start(args, dj);
	len = 0;
	while (*dj)
	{
		if (*dj == '%' && *(dj + 1))
		{
			dj++;
			ft_cases(dj, &len, args);
		}
		else
			len += write(1, dj, 1);
		dj++;
	}
	return (va_end(args), len);
}

int main()
{
	
	int len =    ft_printf("%i %i\n", 2147483647, (int)-2147483648);
	int len2 = printf("%i %i\n", 2147483647, (int)-2147483648);

	printf(" mine: %d\n", len);
	printf("theirs: %d\n", len2);
}