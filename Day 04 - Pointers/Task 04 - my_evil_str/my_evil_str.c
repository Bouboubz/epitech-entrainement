#include "my_evil_str.h"

char *my_evil_str(char *str)
{
    int counter = 0;
    int i = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    while (counter != -1) {
        char d = str[i];
        str[counter] = d;
        i++;
        counter--;
    }
    /*for (int b = 0 ; str[b] != '\0' ; b++) {
        char a = str[b];
        my_putchar(a);
    } */
}