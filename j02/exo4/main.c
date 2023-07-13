#include <unistd.h>
#include "ft_is_negative.c"

int ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    ft_is_negative(15);
    ft_is_negative(-8);
	return 0;
}