/* Exercise 2 - Numbers to Words */
#include<stdio.h>
#include <stdbool.h>

int number(int num)
{
	/* The seconddigit in the number is found by using the modulo of 100. */
	int seconddigit=num%100;
	int firstdigit;

	/* 0 will always give 0 as result after a modulo with another number so it is found and printed independently from every other number. */
	if(num==0)
		printf("zero");
	/* Logical operator '&&' is used to check if the given number falls within a certain range and prints the prefix of that number accordingly. */
	if (seconddigit>=20 && seconddigit<30)
		printf("twenty ");
	else if(seconddigit>=30 && seconddigit<40)
		printf("thirty ");
	else if(seconddigit>=40 && seconddigit<50)
		printf("forty ");
	else if(seconddigit>=50 && seconddigit<60)
		printf("fifty ");
	else if(seconddigit>=60 && seconddigit<70)
		printf("sixty ");
	else if(seconddigit>=70 && seconddigit<80)
		printf("seventy ");
	else if(seconddigit>=80 && seconddigit<90)
		printf("eighty ");
	else if(seconddigit>=90 && seconddigit<100)
		printf("ninety ");
	/* 100 is the only number in the range for the exercise with 3 digits so like 0 it is printed independently from every other number. */
	else if(num==100)
		printf("one hundred");
	/* All nummbers from 10 to 19 are the only two digit numbers which english words are not formed from a combination of two numbers and so they must be induvidually identified and printed. */
	else if(seconddigit==10)
		printf("ten\n");
	else if(seconddigit==11)
		printf("eleven\n");
	else if(seconddigit==12)
		printf("twelve\n");
	else if(seconddigit==13)
		printf("thirteen\n");
	else if(seconddigit==14)
		printf("fourteen\n");
	else if(seconddigit==15)
		printf("fifteen\n");
	else if(seconddigit==16)
		printf("sixteen\n");
	else if(seconddigit==17)
		printf("seventeen\n");
	else if(seconddigit==18)
		printf("eighteen\n");
	else if(seconddigit==19)
		printf("nineteen\n");
	
	/* The logical operator || is used to check if the number is less than 10 'or' greater than or equal to 20. This excludes the numbers from 10 to 19 which are not formed by a combination of prefixs and suffixs. */
	if(seconddigit<10 || seconddigit>=20)
		/* The first digit in the given number is given by finding the modulo of the number with 10. After this number is printed a new line is also printed due to the one digit numbers always being used as suffixs. */
		firstdigit=seconddigit%10;
	if(firstdigit==1)
		printf("one\n");
	if(firstdigit==2)
		printf("two\n");
	if(firstdigit==3)
		printf("three\n");
	if(firstdigit==4)
		printf("four\n");
	if(firstdigit==5)
		printf("five\n");
	if(firstdigit==6)
		printf("six\n");
	if(firstdigit==7)
		printf("seven\n");
	if(firstdigit==8)
		printf("eight\n");
	if(firstdigit==9)
		printf("nine\n");
	/* 2 digit numbers that are divisible by 10 will give 0 as the result of a modulo with 10. This is detected and a new line is printed instead of a suffix. */
	if(firstdigit==0)
		printf("\n");
	
}

int main()
{
	/* The function number() is used to store values in order to convert them to english words. */
	number(10);
	number(23);
	number(100);
	number(3);
	number(30);
	return 0;
}
