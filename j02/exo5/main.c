#include "my_print_comb.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_print_comb();
    return 0;
}
