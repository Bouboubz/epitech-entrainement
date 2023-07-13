#include <unistd.h>
#include "ft_print_alphabet.c"

int ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    ft_print_alphabet();
	return 0;
}