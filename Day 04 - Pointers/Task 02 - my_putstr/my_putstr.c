#include "my_putstr.h"

int my_putstr(char const *str)
{
    for(int i = 0 ; str[i] != '\0' ; i ++ ) {
        char a = str[i];
        my_putchar(a);
    }
}