#include "my_evil_str.h"

char *my_evil_str(char *str)
{
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    while (counter != -1) {
        char a = str[counter];
        my_putchar(a);
        counter--;
    }
}