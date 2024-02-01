/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:19:07 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/25 10:19:07 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(void *nbr, char *base)
{
	int				len;
	char			*str;
	unsigned long	n;

	n = (unsigned long)nbr;
	if (n == 0)
		return (write(1, "(nil)", 5));
	str = hex_to_ptr(n, base);
	if (str == 0)
		return (write(1, "(nil)", 5));
	len = ft_putstr("0x") + ft_putstr(str);
	free(str);
	return (len);
}
/* 
#include <stdio.h>

int	main()
{
	printf(" %p %p ", 0, 0);
	ft_printf(" %p %p ", 0, 0);
}  */