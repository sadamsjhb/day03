#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
if(b != 0)
{
*div = a / b;
*mod = a % b;
}
}

int main(void)
{
int a = 7;
int b = 2;
ft_div_mod(&a,&b);
printf("%d, %d\n", *div, *mod);
return (0);
}
