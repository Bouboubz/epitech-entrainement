#include "ft_print_reverse_alphabet.h"

void ft_print_reverse_alphabet(void)
{
    char a;
    a = 'z';

    while (a >= 'a') {
        ft_putchar(a);
        a--;
    }
}
