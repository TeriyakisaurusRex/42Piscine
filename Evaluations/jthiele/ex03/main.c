#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a;
    int b;
    int c;
    int d;

        c = 12;
        d = 12;
        a = 22;
        b = 7;
        ft_div_mod(a, b, &c, &d);
        printf("%d %d\n", c, d);

        a = 105;
        b = 5;
        ft_div_mod(a, b, &c, &d);
        printf("%d %d\n", c, d);
        
        return (0);
}
