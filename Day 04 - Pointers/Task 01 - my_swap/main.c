#include "my_swap.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_swap();
    return 0;
}