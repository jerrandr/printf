/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:36:43 by jerrandr          #+#    #+#             */
/*   Updated: 2024/04/12 10:55:58 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_ptr(char c, va_list args)
{
	int					count;
	int					flag;
	unsigned long int	p;

	p = 0;
	count = 0;
	flag = 0;
	if (c == 'p')
	{
		p = va_arg(args, unsigned long int);
		if (p != 0)
			count += ft_putstr("0x");
		count += ft_ptr_hexa(p, flag);
	}
	return (count);
}

int	ft_get_value(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (c == '%')
		count += ft_putchar('%');
	count += ft_is_ptr(c, args);
	if (c == 'x')
		count += ft_hexa_low(va_arg(args, unsigned int));
	if (c == 'X')
		count += ft_hexa_upper(va_arg(args, unsigned int));
	if (c == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i]))
			count += ft_get_value(str[++i], args);
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
