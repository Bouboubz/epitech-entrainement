#include "my_putstr.h"

//We rewrite the printf function using write, and making it use a char named c
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