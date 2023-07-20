#include "my_print_alpha.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_print_alpha();
    return 0;
}
