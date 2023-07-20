#include "my_print_alpha.h"

void my_print_alpha(void)
{
    char a;
    a = 'a';

    while (a <= 'z') {
        my_putchar(a);
        a++;
    }

}
