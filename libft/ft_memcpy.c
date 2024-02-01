/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:12:35 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/23 14:44:17 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (0);
	while (n)
	{
		n--;
		((char *)dest)[n] = ((char *)src)[n];
	}
	return (dest);
}
/*
int	main()
{
	char dest[] = "Ola bem vindo";
	char src[] = "ao mundo 42!";

	ft_memcpy(dest, src, sizeof(src));
	printf("%s", dest);
}*/
