/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:29:35 by naadam            #+#    #+#             */
/*   Updated: 2023/02/08 21:19:11 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *dj, ...);
void	ft_cases(const char *dj, int *len, va_list args);
void	ft_putchar(int c, int *len);
void	ft_putnbru(unsigned int dj, int *len, unsigned int base);
void	ft_putstr(char *s, int *len);
size_t	ft_strlen(const char *str);
void	ft_hex(unsigned int hd, int *len, unsigned int base, const char *dj);
void	ft_ptr(unsigned long dj, int *len, unsigned long int base);
void	ft_putnbr( int dj, int *len, int base);

#endif