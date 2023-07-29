#include "my_print_comb2.h"

int my_print_comb2(void)
{
/* We create two variables of type 'int' which will increase up to '98' and '99', we will use the division to write
* the tens and the remainder of the division to write the units because a char cannot take as value more than '9'
* (so it works because the value of 'int' does not exceed '100') */
    for (int b = 0 ; b < 99 ; b++) {
        for (int a = b + 1 ; a < 100 ; a++) {
            char n1 = '0' + b / 10;
            char n2 = '0' + b % 10;
            char n3 = '0' + a / 10;
            char n4 = '0' + a % 10;
            my_print_number(n1, n2, n3, n4);
        }
    }
}

void my_print_number(char n1, char n2, char n3, char n4)
{
// We use a function to write all the numbers and we add commas and spaces except at the last one
    my_putchar(n1);
    my_putchar(n2);
    my_putchar(' ');
    my_putchar(n3);
    my_putchar(n4);
    if (!(n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9'))
    my_putchar(',');
    my_putchar(' ');
}
