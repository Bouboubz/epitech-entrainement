#include "my_print_alpha.h"

int my_print_alpha(void)
{
/* We create a char that will take an encrypted value that will correspond to an 'a' then we will make it increase with
* loop until you get a 'z' */
    char letter;
    letter = 'a';

    while (letter <= 'z') {
        my_putchar(letter);
        letter++;
    }

}
