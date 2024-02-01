/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:07:00 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/23 14:41:57 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *)&str[i]);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && i + j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
/* 
#include <stdio.h>

int	main()
{
	const char original[] = "lorem ipsum dolor sit amet";
	const char search[] = "dolor";

	printf("%s", ft_strnstr(original, search, 20));
}
 */
