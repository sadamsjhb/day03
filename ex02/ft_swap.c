#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

int main()
{
int a = 4;
int b = 9;
ft_swap(&a, &b);
printf("%d, %d\n", a, b);
return (0);
}
