#include "my_put_nbr.h"

int my_put_nbr(int nb)
{
/* We transform the int into a long to increase the value that it can take, then if the number is negative we will
* go positive and add a minus before executing the second function, and if it is positive it is executed directly */
    long number = nb;
    if (number >= 0) {
        principal(number);
    } else {
        number = (-number);
        my_putchar('-');
        principal(number);
    }
}

void principal(long number)
{
/* We establish a counter to know the number of digits and stop the loop when necessary, we invert the number to
* be able to write it in the right direction then we recover the last digit with the remainder of a division to write it before
* delete by dividing it */
    int counter = 0;
    long inverse = 0;
    do {
        while (number > 0) {
            counter++;
            int last = number % 10;
            inverse = inverse * 10 + last;
            number = number / 10;
        }
        char a = '0' + inverse % 10;
        my_putchar(a);
        counter--;
        inverse = inverse / 10;
        } while (counter != 0);
}
