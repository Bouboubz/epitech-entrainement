#include "ft_print_alphabet.h"

int ft_putchar(char c);

void ft_print_alphabet(void)
{
    char a;
    a = 'a';

    while (a <= 'z') {
        ft_putchar(a);
        a++;
    }

}
