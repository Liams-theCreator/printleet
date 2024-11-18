/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:30:35 by imellali          #+#    #+#             */
/*   Updated: 2024/11/18 20:02:28 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_search(char spec, va_list args)
{
	int	printed;

	printed = 0;
	if (spec == 's')
		return (printed += ft_prints(va_arg(args, const char *)));
	if (spec == 'c')
		return (printed += ft_printc(va_arg(args, int)));
	if (spec == 'd' || spec == 'i')
		return (printed += ft_printd(va_arg(args, int)));
	if (spec == 'u')
		return (printed += ft_printu(va_arg(args, unsigned int)));
	if (spec == 'x' || spec == 'X')
		return (printed += ft_printx(va_arg(args, long), spec));
	if (spec == '%')
		return (printed += ft_printc('%'));
	if (spec == 'p')
		return (printed += ft_printp(va_arg(args, void *)));
	return (printed);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			printed += ft_search(str[i], args);
		}
		else
			printed += ft_printc(str[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
