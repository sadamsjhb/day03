#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
int	a = 0;

while(str[a] != '\0')
{
a++;
}
return a++;
}

int main()
{
char a[] = "Hello";
printf("%d\n", ft_strlen(a));
return (0);
}
