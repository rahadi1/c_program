#include <stdio.h>

int main()
{

//##################  if-else statement ##################
	/*int a;
	printf("Input a number: ");
	scanf("%d", &a);

	if(a%2==0){

		printf("%d is an even number.\n",a);
	} else {

		printf("%d is an odd number.\n",a);
	}
	*/
/*
	int a,b,c;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	printf("Input third number: ");
	scanf("%d", &c);
*/
/*	if(a>b)
	{
		if(a>c)
		{
			printf("%d is the biggest number.\n", a);
		}
		else
		{
			printf("%d is the biggest number.\n", c);
		}
	}
	else 
	{
		if(b>c)
		{
			printf("%d is the biggest number.\n", b);
		}
		else
		{
			printf("%d is the biggest number.\n", c);
		}
	}
*/
	/*if(a>b && a>c){

		printf("%d is the largest number.\n", a);
	}
	else if(b>a && b>c){

		printf("%d is the largest number.\n", b);
	}
	else {

		printf("%d is the largest number.\n", c);
	}
	*/

	//#################### while loop ####################

	/*int a = 1;

	while(a < 100){

		//check the value of "a" with modulus of 2
		if(a%2==0){

			printf("%d ", a);
		}
		a++;
	}
	*/

	int a,num,sum = 0,remainder;

	printf("Input a number: ");
	scanf("%d", &a);

	num = a;

	while(a > 0){

		remainder = a%10;
		sum += remainder;
		printf("%d\n",sum);
		a/=10;
	}
	printf("Sums of digit of %d = %d",num,sum);

	return 0;
}
