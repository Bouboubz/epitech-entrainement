#include "ft_is_negative.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_is_negative(15);
    ft_is_negative(-8);
    return 0;
}
