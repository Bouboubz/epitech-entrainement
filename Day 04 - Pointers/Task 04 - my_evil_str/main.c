#include "my_evil_str.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_evil_str();
    return 0;
}