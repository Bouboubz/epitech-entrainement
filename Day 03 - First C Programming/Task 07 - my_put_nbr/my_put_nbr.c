#include "my_put_nbr.h"

int my_put_nbr(int nb)
{
    long n = nb;
    if (n >= 0) {
        principal(n);
    } else {
        n = (-n);
        my_putchar('-');
        principal(n);
    }
}

void principal(long n)
{
    int chiffre = 0;
    long ans = 0;
    do {
        while (n > 0) {
            chiffre++;
            int mod = n % 10;
            ans = ans * 10 + mod;
            n = n / 10;
        }
        char a = '0' + ans % 10;
        my_putchar(a);
        chiffre--;
        ans = ans / 10;
        } while (chiffre != 0);
}
