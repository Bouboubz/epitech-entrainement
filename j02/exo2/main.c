#include "ft_print_reverse_alphabet.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
