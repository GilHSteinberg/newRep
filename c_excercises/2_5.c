
#include <stdio.h>

int return_power(int n)
{
    if ( 0 == n )
    {
        return 1;
    }
    
    int i = 0; /* counts the amount of time we've multiplied 10 by itself so far */
    int result = 10; /* keeps track of the value we'll be returning */
    
    for ( i=1 ; i < n ; i++ )
    {
        result*=10;
    }
    
    return result;
}

int main()
{
    printf("%i\n", return_power(22));
    return 0;
}


