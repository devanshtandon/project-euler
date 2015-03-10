#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUMBER (600851475143)

// What is the largest prime factor of the number 600851475143 ?

int isPrime (long num)
{
	long sqrtNum = sqrt(num);
	for (long i=2; i<=sqrtNum; i++)
	{
		if (num%i == 0) return -1;
	}

	return 0;
}

int main (int argc, char** argv)
{	
	long largestFactor = 1;
	long sqrtNum = sqrt(NUMBER);

	for (int i=1; i<=sqrtNum; i++)
	{
		if (NUMBER%i==0 && isPrime(i)==0) largestFactor = i;
	}

	printf("%ld\n", largestFactor);
	return 0;
}
