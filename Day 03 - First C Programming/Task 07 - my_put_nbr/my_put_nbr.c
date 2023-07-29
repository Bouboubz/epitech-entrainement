#include "my_put_nbr.h"

int my_put_nbr(int nb)
{
/* */
    long number = nb;
    if (number >= 0) {
        principal(number);
    } else {
        nombre = (-number);
        my_putchar('-');
        principal(number);
    }
}

void principal(long number)
{
    int chiffre = 0;
    long ans = 0;
    do {
        while (number > 0) {
            chiffre++;
            int mod = n % 10;
            ans = ans * 10 + mod;
            number = number / 10;
        }
        char a = '0' + ans % 10;
        my_putchar(a);
        chiffre--;
        ans = ans / 10;
        } while (chiffre != 0);
}
