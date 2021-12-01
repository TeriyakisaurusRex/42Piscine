#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int i = 5;
    printf("%d\n", i);
    ft_ft(&i);
    printf("%d\n", i);
    return(0);
}
