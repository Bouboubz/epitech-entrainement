#include "my_strlen.h"


//We rewrite the printf function using write, and making it use a char named c
int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    const char *str = "aure";
    my_strlen(str);
    return 0;
}