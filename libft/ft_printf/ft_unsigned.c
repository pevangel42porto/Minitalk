/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:45:34 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/27 15:54:52 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nbr)
{
	int	size;

	size = 0;
	if (nbr > 9)
	{
		size += ft_unsigned(nbr / 10);
		nbr = nbr % 10;
	}
	size += ft_putchar(nbr + '0');
	return (size);
}
