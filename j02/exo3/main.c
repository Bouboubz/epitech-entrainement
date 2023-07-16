#include "ft_print_numbers.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_print_numbers();
    return 0;
}
