#include "my_putstr.h"

int my_putstr(char const *str)
{
// We create a loop or an int that will increase and that we will use to write each letter of the word that the variable contains
    for(int counter = 0 ; str[counter] != '\0' ; counter ++ ) {
        /* char letter = str[counter]; */
        my_putchar(letter);
    }
}