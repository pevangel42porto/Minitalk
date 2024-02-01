/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:18:30 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/27 15:28:25 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list ap)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (*format == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (*format == 'p')
		return (ft_ptr(va_arg(ap, void *), "0123456789abcdef"));
	if (*format == 'i' || *format == 'd')
		return (ft_putnbr(va_arg(ap, int)));
	if (*format == 'u')
		return (ft_unsigned(va_arg(ap, unsigned int)));
	if (*format == 'x')
		return (ft_hex(va_arg(ap, int), "0123456789abcdef"));
	if (*format == 'X')
		return (ft_hex(va_arg(ap, int), "0123456789ABCDEF"));
	if (*format == '%')
		return (write(1, "%", 1));
	return (0);
}
