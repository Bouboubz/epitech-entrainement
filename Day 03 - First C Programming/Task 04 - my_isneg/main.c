#include "my_isneg.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_isneg(15);
    my_isneg(-8);
    return 0;
}
