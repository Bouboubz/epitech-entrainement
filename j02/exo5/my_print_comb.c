#include "my_print_comb.h"

void my_print_comb (void)
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
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if (a != '7') {
        my_putchar(',');
        my_putchar(' ');
    }
}
