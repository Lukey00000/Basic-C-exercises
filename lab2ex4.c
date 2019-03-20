/* Exercise 4 - Even or Odd, Composite or Prime */
#include <stdbool.h>
#include<stdio.h>


int number(int n)
{
	/* Any number that is divisible by 2 is an even number. Therefore I use an 'if' statement to check if the modulo of the givin number divided by 2 is 0 and if that statement is true then it will print 'is even' and if not it will print 'is false'. This is the same code used in exercise 2. */
	if(n%2==0)
		printf("%d is even",n);
	else
		printf("%d is odd",n);
	
	int prime=1;
	int count=0;
	
	for(prime=1; prime<=n; prime++)
	{
		/* A loop is set up and each time it finds a number by which n returns 0 on a modulo 1 is added to the count. This excludes the number itself but includes 1. This means that the count must reach 2 for the number to not be considered prime as it is therefore divisible bny something other than 1 and itself. */
		if(n%prime==0)
			count++;
	}
	if(count==2)
		printf(" and prime\n");
	else
		printf(" and not prime\n");

}

int main()
{
	/* The function number() is used to store four values and check if they are even/odd and prime/not prime. */
	number(11);
	number(74);
	number(307);
	number(7402);
	number(9357);
	return 0;
}