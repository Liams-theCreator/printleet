#include "../printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int len_1 = 0, len_2 = 0;

	/* ===========> %c <=========== */
	printf("----------------------\n");
	printf("----> CHAR CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %c\n", 53);
	len_2 = ft_printf("Current output:     %c\n", 53);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %cc\n", 'a');
	len_2 = ft_printf("Current output:     %cc\n", 'a');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %cAAA\n", 'a');
	len_2 = ft_printf("Current output:     %cAAA\n", 'a');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %c\n", '\0');
	len_2 = ft_printf("Current output:     %c\n", '\0');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %%%c\n", 'y');
	len_2 = ft_printf("Current output:     %%%c\n", 'y');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	return (0);
}
