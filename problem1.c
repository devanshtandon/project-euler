#include <stdio.h>
#include <stdlib.h>

#define LIMIT (1000)

int main (int argc, char** argv)
{	
	int sum = 0;

	for (int i=0; i<LIMIT; i++)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
	return 0;
}
