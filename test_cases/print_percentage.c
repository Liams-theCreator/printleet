#include "../printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int len_1 = 0, len_2 = 0;

/* ===========> % <=========== */
	printf("----------------------\n");
	printf("-> PERCENTAGE CASES <-\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %%\n");
	len_2 = ft_printf("Current output:     %%\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %%%%%%\n");
	len_2 = ft_printf("Current output:     %%%%%%\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	
	printf("------------\n");
	
	printf("Expected output:    ");
	len_1 = printf("%");
	printf("\n");
	printf("Current output:     ");
	len_2 = ft_printf("%");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	
	printf("------------\n");
	
	printf("Expected output:    ");
	len_1 = printf("%   ");
	printf("\n");
	printf("Current output:     ");
	len_2 = ft_printf("%   ");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	
	printf("------------\n");
	
	printf("Expected output:    ");
	len_1 = printf("test%");
	printf("\n");
	printf("Current output:     ");
	len_2 = ft_printf("test%");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	
	printf("------------\n");
	return (0);
}
