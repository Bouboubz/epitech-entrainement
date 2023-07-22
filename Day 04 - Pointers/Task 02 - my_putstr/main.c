#include "my_putstr.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_putstr();
    return 0;
}