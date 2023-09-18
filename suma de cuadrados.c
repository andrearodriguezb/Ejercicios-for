#include <stdio.h>
#include <math.h>

int main ()
{
	int x, suma=0;
	
	for(x=1; x<=100; x++)
	{
		suma+=pow (x,2);
	}
		printf("Suma de los cuadrados de los primeros 100 numeros:%d\n", suma);

	
return 0;
}
