#include "my_print_revalpha.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_print_revalpha();
    return 0;
}
