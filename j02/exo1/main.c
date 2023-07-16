#include "ft_print_alphabet.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}
