int ft_putchar(char c);
void print_numbers (char a, char b, char c);
void print_space ();

void ft_print_comb ()
{
    char a = '0';
    char b = '1';
    char c = '2';

    while (a != '7') {
        if (c == ':') {
             c = '0';
             b++;
             while(b >= c) {
                c++;
                if (b == '9') {
                    b = '0';
                    a++;
                    while (a >=b) {
                        b++;
                    }
                }
             }
        }
        print_numbers(a, b, c);
        c++;
        if(a != '7') {
            print_space();
        }
    }
}

void print_numbers (char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
}

void print_space ()
{
    ft_putchar(',');
    ft_putchar(' ');
}
