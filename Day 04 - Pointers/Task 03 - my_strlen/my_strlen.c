#include "my_strlen.h"

int my_strlen(char const *str)
{
// We create a loop that stops when the word is finished, we increase the value of the int to know the number of letters
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return counter;
    
}