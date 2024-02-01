/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:43:34 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/11 11:25:22 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (src_len);
	if (size < dest_len)
		src_len += size;
	else
		src_len += dest_len;
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len);
}
/*
int	mian()
{
	const char source[] = "Bem vindo";
	char dest[] = "ao mundo 42!";

	printf("%s", ft_strlcat(dest, source, sizeof(dest)));
}*/
