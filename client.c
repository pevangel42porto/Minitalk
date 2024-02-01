/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:46:07 by pevangel          #+#    #+#             */
/*   Updated: 2024/01/18 15:48:02 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_action(int pid, char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*str)
	{
		c = *str;
		while (i < 8)
		{
			if ((c << i) & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
			usleep(100);
		}
		str++;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_printf("ERROR: invalid number of arguments\n");
		ft_printf("TYPE: ./server <[PID]> + <TEXT>\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		signal_action(ft_atoi(argv[1]), argv[2]);
	}
	return (0);
}
