#include "my_evil_str.h"

//We rewrite the printf function using write, and making it use a char named c
int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    const char *str = "bonjour";
    my_evil_str(str);
    return 0;
}