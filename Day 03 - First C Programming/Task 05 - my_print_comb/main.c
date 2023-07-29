#include "my_print_comb.h"

//We rewrite the printf function using write, and making it use a char named c
int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_print_comb();
    return 0;
}
