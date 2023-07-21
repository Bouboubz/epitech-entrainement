#include "my_print_comb.h"

void my_print_comb (void)
{
    for (char a = '0' ; a <= '9' ; a++) {
        for (char b = a + 1 ; b <= '9' ; b++) {
            for (char c = b + 1 ; c <= '9' ; c++) {
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
