#include "my_swap.h"

void my_swap(int *a, int *b)
{
// We invert the content of the pointers with two int
    int a1 = *a;
    int b1 = *b;
    *a = b1;
    *b = a1;
}
