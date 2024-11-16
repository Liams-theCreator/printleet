/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:40:27 by imellali          #+#    #+#             */
/*   Updated: 2024/11/16 12:40:31 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int main(void)
{
	int ret;
	int x = 42;
	char str[] = "Liams the Creator";

	ret = print("String is %s, int is %d\n", str, x);
	print("printed : %d", ret);
	return 0;
}
