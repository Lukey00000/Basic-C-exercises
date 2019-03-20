/* Exercise 5 - Multiplication by Addition */
#include<stdio.h>

int sum(int x, int y)
{
	/* mult is given the initial value of 0 so that if a number is multiplied by 0 the value 0 will be printed. */
	int mult=0;
	while(y!=0)
	{
		/* Iteration is used to add the value of x to a new int 'mult' and subract 1 from y. This is carried out until the value of y reaches 0. At this point x has been added to itself y times which results in the multiplication of x by y. */
		mult=mult+x;
		y--;
	}
	printf("%d\n",mult);
}


int main()
{
	/* The function sum() is used to store 2 values to multiply together. */
	sum(6,3);
	sum(9,9);
	sum(3,0);
	sum(-1,7);
	sum(-29,803);
	return 0;	
}
