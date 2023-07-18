#include "ft_print_comb.h"

void ft_print_comb (void)
{
    char a = '0';
    char b = '1';
    char c = '2';

    while (a <= '9') {
    b = a + 1;
        while (b <= '9') {
            c = b + 1;
            while (c <= '9') {
                print_numbers(a, b ,c);
                c++;
            }
            b++;
        }
        a++;
    }


}

void print_numbers (char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if (a != '7') {
        ft_putchar(',');
        ft_putchar(' ');
    }
}
