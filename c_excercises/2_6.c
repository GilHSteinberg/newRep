#include <stdio.h>

void Swap_Two_Values(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


int main()
{
    int a = 1, b = 2;
    printf("a = %d, b = %d\n", a, b);
    Swap_Two_Values( &a , &b );
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

