/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:32:35 by imellali          #+#    #+#             */
/*   Updated: 2024/11/16 11:59:57 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(const char *str);
int	print(const char *str, ...);

#endif
