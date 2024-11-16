/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:41:34 by imellali          #+#    #+#             */
/*   Updated: 2024/11/16 12:41:35 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	int	printed;

	printed = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		printed++;
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (printed);
}

int ft_putstr(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
