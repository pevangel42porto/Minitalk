/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:02:31 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/27 16:14:43 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex(unsigned long long n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = i + 1;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

char	*hex_to_str(unsigned int n, char *base)
{
	char	*hex;
	int		size;

	size = count_hex(n);
	hex = malloc(sizeof(char *) * size + 1);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n /= 16;
		size--;
	}
	return (hex);
}

char	*hex_to_ptr(unsigned long n, char *base)
{
	char	*hex;
	int		size;

	size = count_hex(n);
	hex = (char *)malloc(sizeof(char) * size + 1);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n /= 16;
		size--;
	}
	return (hex);
}
