#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

// check if number is palindrome
int isPalindrome (int num)
{
	int reverse = 0; 
	int check = num;
	for (int i=0; check > 0; i++)
	{
		reverse = (reverse*10) + (check%10);
		check /= 10;
	}

	if (reverse == num)
	{
		// is a palindrome
		return 1;
	}
	else 
	{
		return -1;
	}
}

int main (int argc, char** argv)
{	
	int product; 
	int maxProduct = 100*100;

	for (int n1=100; n1<1000; n1++)
	{
		for (int n2=100; n2<1000; n2++)
		{
			product = n1*n2;
			if ((isPalindrome(product)==1) && (product>maxProduct))
			{
				maxProduct = product;
			}
		}
	}

	printf("%d\n", maxProduct);
	
	return 0;
}
