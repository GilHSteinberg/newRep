#include <stdio.h>

double return_power(double n)
{
    if ( 0 == n )
    {
        return 1;
    }
    
    else if ( 0 > n )
    {
        return (-1)*1/n;
    }
    
    int i = 0; /* counts the amount of time we've multiplied 10 by itself so far */
    double result = 10; /* keeps track of the value we'll be returning */
    
    for ( i=1 ; i < n ; i++ )
    {
        result*=10;
    }
    
    return result;
}

int main()
{
    printf("%f\n", return_power(22));
    return 0;
}


