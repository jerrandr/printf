/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:36:52 by jerrandr          #+#    #+#             */
/*   Updated: 2024/04/09 09:57:40 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int    ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
char	*ft_strchr(const char *s, int c)

#endif
