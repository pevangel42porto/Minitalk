/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:53:26 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/20 14:26:38 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*ptr;

	if (s1 == NULL || *s1 == '\0')
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	len = end - start;
	if (end - start < 0)
		len = 0;
	ptr = ft_substr(s1, start, len + 1);
	return (ptr);
}

/* #include <stdio.h>
int	main ()
{
	char const	example[] = "aaaaola bem vindo ao mundo a 42!aaaaaa";
	char const	delete[] = "a";

	printf("%s", ft_strtrim(example, delete));
} */
