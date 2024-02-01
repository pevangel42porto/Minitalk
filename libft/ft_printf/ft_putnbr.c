/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:25:45 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/27 15:54:33 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	size;

	size = 0;
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else
	{
		if (nbr < 0)
		{
			size = write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr > 9)
		{
			size += ft_putnbr(nbr / 10);
			nbr = nbr % 10;
		}
		size += ft_putchar(nbr + '0');
	}
	return (size);
}
