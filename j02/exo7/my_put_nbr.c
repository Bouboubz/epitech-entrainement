#include "my_put_nbr.h"

void my_put_nbr(int nb)
{
    long n = nb;
    if (n >= 0) {
        principal_pos(n);
    } else {
        n = (-n);
        principal_neg(n);
    }
}

void principal_pos(int n)
{
    int ans = 0;
    do {
        while (n > 0) {
            int mod = n % 10;
            ans = ans * 10 + mod;
            n = n / 10;
        }
        char a = '0' + ans % 10;
        my_putchar(a);
        ans = ans / 10;
        } while (ans > 0);
}

void principal_neg(int n)
{
    int ans = 0;
    my_putchar('-');
    do {
        while (n > 0) {
            int mod = n % 10;
            ans = ans * 10 + mod;
            n = n / 10;
        }
        char a = '0' + ans % 10;
        my_putchar(a);
        ans = ans / 10;
        } while (ans != 0);
}
