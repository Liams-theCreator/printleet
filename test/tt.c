#include "../printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = ft_printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    
	ft_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    
	ft_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    
	ft_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    
	ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    
	ft_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    
	ft_printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    
	ft_printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    
	len = ft_printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    ft_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    
	ft_printf("Zero:[%d]\n", 0);
    printf("Zero:[%d]\n", 0);

    ft_printf("Large number:[%d]\n", 1234567890);
    printf("Large number:[%d]\n", 1234567890);

    ft_printf("Negative large number:[%d]\n", -1234567890);
    printf("Negative large number:[%d]\n", -1234567890);

    ft_printf("Unsigned zero:[%u]\n", 0);
    printf("Unsigned zero:[%u]\n", 0);

    ft_printf("Minimum hexadecimal:[%x]\n", 0);
    printf("Minimum hexadecimal:[%x]\n", 0);

    ft_printf("Hexadecimal 255:[%x]\n", 255);
    printf("Hexadecimal 255:[%x]\n", 255);

    ft_printf("Max address:[%p]\n", (void *)0xFFFFFFFFFFFFFFFF);
    printf("Max address:[%p]\n", (void *)0xFFFFFFFFFFFFFFFF);

    ft_printf("String with null byte:[%s]\n", "Hello\0World");
    printf("String with null byte:[%s]\n", "Hello\0World");

	 ft_printf("Character (ASCII 0):[%c]\n", 0);
    printf("Character (ASCII 0):[%c]\n", 0);

    ft_printf("Character (high ASCII 255):[%c]\n", 255);
    printf("Character (high ASCII 255):[%c]\n", 255);

    ft_printf("Pointer (zero address):[%p]\n", (void *)0);
    printf("Pointer (zero address):[%p]\n", (void *)0);

    ft_printf("Pointer (large address):[%p]\n", (void *)0x123456789ABCDEF0);
    printf("Pointer (large address):[%p]\n", (void *)0x123456789ABCDEF0);

	ft_printf("Passing NULL : [%p]\n", NULL);
	printf("Passing NULL : [%p]\n", NULL);

    ft_printf("Signed decimal (max int):[%d]\n", INT_MAX);
    printf("Signed decimal (max int):[%d]\n", INT_MAX);

    ft_printf("Signed decimal (min int):[%d]\n", INT_MIN);
    printf("Signed decimal (min int):[%d]\n", INT_MIN);

    ft_printf("Signed decimal (zero):[%d]\n", 0);
    printf("Signed decimal (zero):[%d]\n", 0);

    ft_printf("Signed decimal (small negative):[%d]\n", -1);
    printf("Signed decimal (small negative):[%d]\n", -1);

    ft_printf("Unsigned decimal (max uint):[%u]\n", UINT_MAX);
    printf("Unsigned decimal (max uint):[%u]\n", UINT_MAX);

    ft_printf("Unsigned decimal (zero):[%u]\n", 0);
    printf("Unsigned decimal (zero):[%u]\n", 0);

    ft_printf("Unsigned decimal (small positive):[%u]\n", 1);
    printf("Unsigned decimal (small positive):[%u]\n", 1);

    ft_printf("Hexadecimal (255):[%x]\n", 255);
    printf("Hexadecimal (255):[%x]\n", 255);

    ft_printf("Hexadecimal (max int):[%x]\n", INT_MAX);
    printf("Hexadecimal (max int):[%x]\n", INT_MAX);

    ft_printf("Hexadecimal (zero):[%x]\n", 0);
    printf("Hexadecimal (zero):[%x]\n", 0);

    ft_printf("Hexadecimal uppercase (255):[%X]\n", 255);
    printf("Hexadecimal uppercase (255):[%X]\n", 255);

    ft_printf("Percent sign (%%):[%%]\n");
    printf("Percent sign (%%):[%%]\n");

	return (0);
}
