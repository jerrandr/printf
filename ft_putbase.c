/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:25:14 by jerrandr          #+#    #+#             */
/*   Updated: 2024/04/12 09:00:32 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_hexa(unsigned long int nb, int flag)
{
	char	*base;
	int		count;

	if (nb == 0 && flag == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count = 0;
	flag = 2;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_ptr_hexa(nb / 16, flag);
		count += ft_ptr_hexa(nb % 16, flag);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}

int	ft_hexa_low(unsigned long int nb)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_hexa_low(nb / 16);
		count += ft_hexa_low(nb % 16);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}

int	ft_hexa_upper(unsigned int nb)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_hexa_upper(nb / 16);
		count += ft_hexa_upper(nb % 16);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	unsigned long int	nb;
	int					i;

	i = 0;
	nb = n;
	if (nb < 10)
		i += ft_putchar((nb + '0'));
	if (nb >= 10)
	{
		i += ft_putnbr_unsigned((nb / 10));
		i += ft_putchar((nb % 10) + '0');
	}
	return (i);
}
