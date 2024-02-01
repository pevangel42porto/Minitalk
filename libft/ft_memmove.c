/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:24:18 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/20 11:24:38 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src > dest)
		while (i++ < n)
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
	if (src < dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main()
{
	char dest[] = "Hello";
	char src[] = "World";

	printf("%s", (char *)ft_memmove(dest, src, sizeof(src)));
}*/
