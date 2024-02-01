/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:51:02 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/27 15:53:33 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../libft.h"

int				ft_printf(const char *format, ...);
int				ft_putchar(int c);
int				ft_putstr(char *str);
int				ft_ptr(void *nbr, char *base);
int				ft_format(const char *format, va_list ap);
char			*hex_to_str(unsigned int n, char *base);
int				ft_putnbr(int nbr);
int				ft_unsigned(unsigned int nbr);
int				ft_hex(int nbr, char *base);
char			*hex_to_ptr(unsigned long n, char *base);

#endif
