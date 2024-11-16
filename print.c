/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:41:11 by imellali          #+#    #+#             */
/*   Updated: 2024/11/16 12:41:23 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int print(const char *str, ...)
{
	va_list args;
	int i;
	int printed;

	i = 0;
	printed = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 's')
				printed += ft_putstr(va_arg(args, const char *));
			else if (str[i] == 'd')
				printed += ft_putnbr(va_arg(args, int));
		}
		else
			printed += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
