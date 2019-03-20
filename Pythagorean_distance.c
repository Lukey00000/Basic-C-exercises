/* Exercise 3 - Pythagorean Distance */
#include<stdio.h>
/* <math.h> is used in order to use the sqrt function. */
#include<math.h>

int coor(int x1, int y1, int x2, int y2)
{
	/* The distance between two points in a geometric plane is calculated using given formula. */
	/* Due to there being no square function the variables are just multiplied by themselves. */
	/* Distance is calculated as a float due to not always reaulting in integers. */
	float distance=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	printf("%1.2f\n",distance);
}

int main()
{
	/* The function number() is used to store four values each corresponding to an x and y for two coordinates. */
	coor(0,0,4,3);
	coor(21,3,7,9);
	coor(-2,5,17,1);
	coor(-13,5,9,2);
	coor(-6,-4,-14,19);
	return 0;
}

