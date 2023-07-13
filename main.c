#include <unistd.h>
#include "test.c"

int ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    ft_print_comb();
	return 1;
}