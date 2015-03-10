#include <stdio.h>
#include <stdlib.h>

#define LIMIT (4000000)

// By considering the terms in the Fibonacci sequence 
// whose values do not exceed four million, find the sum 
// of the even-valued terms

int main (int argc, char** argv)
{	
	int sum = 0;

	int fibN = 0;
	int fibN1 = 1;
	int fibN2 = 0;

	for (int i=0; fibN1 < LIMIT; i++)
	{
		fibN = fibN1 + fibN2;
		fibN2 = fibN1;
		fibN1 = fibN;

		if (fibN%2 == 0) sum += fibN;
	}

	printf("%d\n", sum);
}
