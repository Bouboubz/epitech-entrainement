#include <unistd.h>
#include "ft_print_numbers.c"

int ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    ft_print_numbers();
	return 0;
}