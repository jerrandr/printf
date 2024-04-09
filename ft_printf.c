/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:36:43 by jerrandr          #+#    #+#             */
/*   Updated: 2024/04/09 14:32:40 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexa(int nb)
{
    char    *base;

    base = "0123456789abcdef";
    if (nb >= 16)
    {
        ft_hexa(nb / 16);
        ft_hexa(nb % 16);
    }
    else
        count += ft_putstr(base[nb]);
    
    
}

int ft_get_value(char c, va_list args)
{
    int count;

    count = 0;
    if (c == 'c')
        count += ft_putchar(va_arg(args, char));
    if (c == 's')
    
        count += ft_putstr(va_arg(args, char*));
    if (c == 'd' || c == 'i')
        count += ft_putnbr(va_arg(args, int));
    if (c == '%')
        count += ft_putchar('%');
    if (c == 'p')

    

    
    
    
}

int ft_printf(const char *str, ...)
{
    int i;
    int count;

    count = 0;
    i = 0;
    va_list args;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] && ft_strchr("cspdiuxX%",str[i]))
            count += 
        
    }
    
    
    va_end(args);
    
    
}
