#include "my_evil_str.h"

char *my_evil_str(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        char a = str[i];
        my_putchar(a);
        i++;
    }
}