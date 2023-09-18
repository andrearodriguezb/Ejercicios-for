#include <stdio.h>

int main()
{
	int x, a;
	for(x=1; x<=5; x++)
	{
		printf("%d\n", x);
	
		if(x<=5)
		{
		a= x*-1;
		printf("%d\n", a);
		}
	}	
	
// Este programa te muestra la sucesión de números: 1 -1 2 -2 3 -3 4 -4 5 -5

	return 0;
}
