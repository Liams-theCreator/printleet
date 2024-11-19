#include <stdio.h>
#include "../printf.h"
#include <limits.h>

int main()
{
    unsigned int l = 42; // Initialize 'l' with some value

    ft_printf("%u\n", 1024);
    printf("%u\n", 1024);
    ft_printf("%u\n", (unsigned int)-1024);
    printf("%u\n", (unsigned int)-1024);
    ft_printf("%u\n", 0);
    printf("%u\n", 0);
    ft_printf("%u\n", UINT_MAX);
    printf("%u\n", UINT_MAX);
    ft_printf("%u\n", l);
    printf("%u\n", l);
    ft_printf("There are %u bytes in %u KB\n", 1024, 1);
    printf("There are %u bytes in %u KB\n", 1024, 1);
    ft_printf("%u - %u = %u\n", 2048, 1024, 1024);
    printf("%u - %u = %u\n", 2048, 1024, 1024);
    ft_printf("%u + %u = %u\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2
    printf("%u + %u = %u\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX);  // Assuming 'res' is INT_MAX * 2
    return (0);
}
