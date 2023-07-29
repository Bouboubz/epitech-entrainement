#include "my_isneg.h"

int my_isneg(int n)
{
// With 'if' conditions we check if the number entered is positive or negative and we write the letter according to the result
    if (n >= 0) {
        my_putchar('P');
        } else {
            my_putchar('N');
        }
}
