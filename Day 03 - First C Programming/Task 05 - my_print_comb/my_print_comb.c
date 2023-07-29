#include "my_print_comb.h"

int my_print_comb (void)
{
/* We use several 'for' loops to make the numbers increase according to the others and to have the one on the right
* always higher than the one on the left then we write them */
    for (char n1 = '0' ; n1 <= '9' ; n1++) {
        for (char n2 = n1 + 1 ; n2 <= '9' ; n2++) {
            for (char n3 = n2 + 1 ; n3 <= '9' ; n3++) {
                print_numbers(n1, n2 ,n3);
            }
        }
    }


}

void print_numbers (char n1, char n2, char n3)
{
// We create a function to write each number and we add a space and a comma except at the last digit
    my_putchar(n1);
    my_putchar(n2);
    my_putchar(n3);
    if (n1 != '7') {
        my_putchar(',');
        my_putchar(' ');
    }
}
