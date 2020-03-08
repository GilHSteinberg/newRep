#include <stdio.h>

int k=1, b=0, count=0;

int *foo(int n)
{
	count++;
	if ( n > 4 )
	{
		return &k;
	}

	else if (0 < n )
	{
		foo(n-1);	
	}
	else return &b;
}

int main()
{
	int y = *(foo(*(foo(7))))=*(foo(-6));

	printf("%i,%i\n",*(foo(y)),count);

	return 0;
}
