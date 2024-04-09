/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:52:23 by jerrandr          #+#    #+#             */
/*   Updated: 2024/04/09 09:54:50 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int    ft_putchar(int c)
{
	return(write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i]);
		i++;
	return (i);
}

int	ft_putnbr(int n)
{
	long int	nb;
	int	i;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar((nb + '0'));
		i++;
	if (nb >= 10)
	{
		i++;
		ft_putnbr((nb / 10));
		ft_putchar((nb % 10) + '0');
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	if ((char)c == '\0')
		return (&tmp[ft_strlen(tmp)]);
	while (tmp[i] != '\0')
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}