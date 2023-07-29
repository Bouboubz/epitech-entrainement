#include "my_print_digits.h"

int my_print_digits(void)
{
/* We declare a variable that takes the value of '0' then we make it increase in value with a loop up to '9'
* and we write each change */
    char number;
    number = '0';

    while (number <= '9') {
        my_putchar(number);
        number++;
    }

}
