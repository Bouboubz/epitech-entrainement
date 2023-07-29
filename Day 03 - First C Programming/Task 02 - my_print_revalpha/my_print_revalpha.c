#include "my_print_revalpha.h"

int my_print_revalpha(void)
{
/* We create a char that will take an encrypted value that will correspond to an 'z' then we will make it decrease with
* loop until you get a 'z' */
    char letter;
    letter = 'z';

    while (letter >= 'a') {
        my_putchar(letter);
        letter--;
    }
}
