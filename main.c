/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:40:27 by imellali          #+#    #+#             */
/*   Updated: 2024/11/17 20:09:33 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int x = 13371337;
	char str[] = "Liams the Creator";
	unsigned int u = 465789324;

	ret1 = ft_printf("String : %s, Int : %d, Unsigned int : %u, hex : %x, HEX : %X, Percent : %%\n", str, x, u, x, x);
	ft_printf("printed : %d\n", ret1);
	ret2 = printf("String : %s, Int : %d, Unsigned int : %u, hex : %x, HEX : %X, Percent : %%\n", str, x, u, x, x);
	printf("printed : %d\n", ret2);

	return 0;
}
