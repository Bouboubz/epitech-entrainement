int ft_putchar(char c);

void ft_print_reverse_alphabet()
{
	char a;
    a = 'z';

    while(a >= 'a')
    {
        ft_putchar(a);
        a--;
    }

}
