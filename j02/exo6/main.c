#include "my_print_comb2.c"

int my_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    my_print_comb2();
	return 0;
}