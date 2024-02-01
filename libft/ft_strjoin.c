/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:55:25 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/23 14:39:24 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	if (s1 && s2)
	{
		i = 0;
		j = 0;
		while (s1[i])
		{
			str[j++] = s1[i++];
		}
		i = 0;
		while (s2[i])
			str[j++] = s2[i++];
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
/* 
#include <stdio.h>
int	main()
{
	char s1[] = "bem vindo";
	char s2[] = " ao mundo 42!";

	printf("%s", ft_strjoin(s1, s2));
}
 */