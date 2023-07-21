#include "my_put_nbr.h"

void my_put_nbr(int nb)
{
    int inv;
    while(num > 0) {
        //split the last digit 
        int mod = num % 10;
        
        //multiply ans with 10 and add the splitted digit
        ans = ans * 10 + mod;
        
        //divide num by 10
        num = num / 10;
    }
    while (inv != 0) {
        char a = '0' + inv % 10;
        my_putchar(a);
        inv = inv / 10;
    }
}
