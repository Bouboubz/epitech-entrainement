#include "my_put_nbr.h"

void my_put_nbr(int nb)
{
    if (nb >= 0) {
        principal_pos(nb);
    } else {
        nb = (-nb);
        principal_neg(nb);
    }
}

void principal_pos(int nb)
{
    int ans = 0;
    do {
        while (nb > 0) {
            int mod = nb % 10;
            ans = ans * 10 + mod;
            nb = nb / 10;
        }
        char a = '0' + ans % 10;
        my_putchar(a);
        ans = ans / 10;
        } while (ans != 0);
}

void principal_neg(int nb)
{
    int ans = 0;
    my_putchar('-');
    do {
        while (nb > 0) {
            int mod = nb % 10;
            ans = ans * 10 + mod;
            nb = nb / 10;
        }
        char a = '0' + ans % 10;
        my_putchar(a);
        ans = ans / 10;
        } while (ans != 0);
}
