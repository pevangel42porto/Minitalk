/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:20:41 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/19 14:23:19 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * (-1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			n = n % 10;
		}
		ft_putchar_fd(n + '0', fd);
	}
}
/* 
int	main()
{
	int	number = 2145450;

	ft_putnbr_fd(number, 1);
}
 */
