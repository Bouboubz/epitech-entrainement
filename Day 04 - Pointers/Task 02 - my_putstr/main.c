#include "my_putstr.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    const char *str = "Bonjour";
    my_putstr(str);
    return 0;
}