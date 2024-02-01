/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:47:33 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/27 15:56:56 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(int nbr, char *base)
{
	int		len;
	int		n;
	char	*str;

	len = 0;
	n = nbr;
	if (nbr == 0)
	{
		write(1, "0", 1);
		len += 1;
		return (len);
	}
	str = hex_to_str(n, base);
	if (str == 0)
		return (write(1, "0", 1));
	len = ft_putstr(str);
	free(str);
	return (len);
}
