/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:40:27 by imellali          #+#    #+#             */
/*   Updated: 2024/11/21 14:41:41 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int x = 13371337;
	char str[] = "Liams the Creator";
	unsigned int u = 465789324;
	char empty[] = "";
	char *ptr = str;

	ret1 = ft_printf("String : %s, Int : %d, Unsigned int : %u, hex : %x, HEX : %X, Percent : %%\n", str, x, u, x, x);
	ft_printf("printed : %d\n", ret1);
	ret2 = printf("String : %s, Int : %d, Unsigned int : %u, hex : %x, HEX : %X, Percent : %%\n", str, x, u, x, x);
	printf("printed : %d\n", ret2);
	ft_printf("----------\n");
	ft_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	ft_printf("address : %p\n", ptr);
	printf("address : %p\n", ptr);
	ft_printf("%s\n", empty);
	printf("%s\n", empty);
	ft_printf("%%%%%%%%\n");
	printf("%%%%%%%%\n");
	printf("\\\\\\\\\\\\\n");
	ft_printf("\\\\\\\\\\\\\n");
	
	//ft_printf("%w\n", "Invalid specifier");
	//printf("%w\n", "Invalid specifier");
	
	ft_printf("-------------------\n");

	ft_printf("%");
	ft_printf("\n");
	ft_printf("%h");
	ft_printf("\n");
	return 0;
}
