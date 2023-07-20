#include "my_print_revalpha.h"

void my_print_revalpha(void)
{
    char a;
    a = 'z';

    while (a >= 'a') {
        my_putchar(a);
        a--;
    }
}
