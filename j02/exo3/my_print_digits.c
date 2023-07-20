#include "my_print_digits.h"

void my_print_digits(void)
{
    char a;
    a = '0';

    while (a <= '9') {
        my_putchar(a);
        a++;
    }

}
