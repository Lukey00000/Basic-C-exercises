/* Exercise 1 - Even or Not */
#include <stdbool.h>
#include<stdio.h>

int number(int n)
{
	/* Any number that is divisible by 2 is an even number. Therefore I use an 'if' statement to check if the modulo of the givin number divided by 2 is 0 and if that statement is true then it will print 'True' for it being even. */
	if(n%2==0)
		printf("True\n");
	/* If the modulo of the given number is not 0 then the number is not divisible by 2 and therefore not even and so 'False' is printed for it being even as it does not fufil the statement given in the 'if' function. */
	else
		printf("False\n");
}

int main()
{
	/* The function number() is used to store values in order to check if they are even or odd. */
	number(10);
	number(21);
	number(33);
	number(8);
	number(200);
	return 0;
}

