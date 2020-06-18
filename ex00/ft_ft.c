void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_putaddr(void *ptr);

void ft_ft(int *nbr)
{
int a;
int *ptr;

a = 42;
ptr = &a;
ft_putnbr(*ptr);
}

int main(void)
{

ft_ft(42);
ft_putnbr('\n');
return (0);
}
~ 
