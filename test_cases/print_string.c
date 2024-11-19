#include "../printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int len_1 = 0, len_2 = 0;

/* ===========> %s <=========== */
	printf("----------------------\n");
	printf("---> STRING CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %s\n", "Morocco");
	len_2 = ft_printf("Current output:     %s\n", "Morocco");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s$\n", "");
	len_2 = ft_printf("Current output:     %s$\n", "");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s\n", "hello, world");
	len_2 = ft_printf("Current output:     %s\n", "hello, world");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %sForLife\n", "Morocco");
	len_2 = ft_printf("Current output:     %sForLife\n", "Morocco");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	ft_printf("%\n");
	printf("%\n");
	ft_printf("");
	ft_printf("\n");
	ft_printf("%s\n", NULL);
	ft_printf("%%%c\n", 'X');
	ft_printf("%t\n");
	ft_printf("space :% 	 s\n", "hello");
	ft_printf("%+d\n", 55);
	ft_printf("%+i\n", 55);
	ft_printf("%+d\n", -20);
	ft_printf(NULL);
	
	return (0);
}
