#include "my_print_comb.h"

void my_print_comb (void)
{
    char a = '0';
    char b = '1';
    char c = '2';

    for (a ; a <= '9' ; a++) {
    b = a + 1;
        for (b ; b <= '9' ; b++) {
            c = b + 1;
            for (c ; c <= '9' ; c++) {
                print_numbers(a, b ,c);
            }
        }
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
