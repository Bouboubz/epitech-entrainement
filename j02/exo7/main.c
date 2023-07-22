#include "my_put_nbr.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_put_nbr(1000000);
    return 0;
}
