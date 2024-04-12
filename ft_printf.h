/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:36:52 by jerrandr          #+#    #+#             */
/*   Updated: 2024/04/12 08:54:15 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
char	*ft_strchr(const char *s, int c);
int		ft_printf(const char *str, ...);
int		ft_ptr_hexa(unsigned long int nb, int flag);
int		ft_hexa_low(unsigned long int nb);
int		ft_hexa_upper(unsigned int nb);
int		ft_putnbr_unsigned(unsigned int n);
#endif
