#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void putss(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void print(const char *str, ...)
{
	va_list args;
	const char *s = str;
	va_start(args, str);

	while (s != NULL)
	{
		putss(s);
		write(1, " ", 1);
		s = va_arg(args, const char*);
	}
	va_end(args);
}

int main(void)
{
	print("Liams", "the", "Creator", NULL);
	return 0;
}
