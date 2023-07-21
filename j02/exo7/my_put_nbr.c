#include "my_put_nbr.h"

void my_put_nbr(int nb)
{
    int inv;
    while (nb > 0) {
        int last = nb % 10;
        inv = inv * 10 + last;
        nb = nb / 10;
    }
    while (inv != 0) {
        char a = '0' + inv % 10;
        my_putchar(a);
        inv = inv / 10;
    }
}
