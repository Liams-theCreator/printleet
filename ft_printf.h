/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:29:24 by imellali          #+#    #+#             */
/*   Updated: 2024/11/19 16:03:48 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_printc(char c);
int	ft_prints(const char *str);
int	ft_printd(int n);
int	ft_printu(unsigned int n);
int	ft_printx(unsigned int n, char spec);
int	ft_printp(void *ptr);

#endif
