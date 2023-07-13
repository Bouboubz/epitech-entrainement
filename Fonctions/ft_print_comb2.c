int ft_putchar(char c);
void print_numbers(char a, char b, char c, char d);
void print_space_comma();

void ft_print_comb2()
{
    char a;
    char b;
    char c;
    char d;
    a = '0';
    while (!(a == '9' && b == '8' && c == '9' && d == '9'))
    {
        if (d == ':')
        {
             c = '0';
             b++;
             while(b >= c)
             {
                c++;
                if (b == '9')
                {
                    b = '0';
                    a++;
                    while (a >=b)
                    {
                        b++;
                    }
                }
             }
        }
        print_numbers(a, b, c);
        d++;
        if(a != '7')
        {
            print_space();
        }
    }
}

void print_numbers(char a, char b, char c, char d)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(' ');
    ft_putchar(c);
    ft_putchar(d);
}

void print_space_comma()
{
    ft_putchar(',');
    ft_putchar(' ');
}