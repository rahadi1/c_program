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
	/*
	int a,b,remainder,sum = 0;

	printf("Input a number: ");
	scanf("%d", &b);

	a = b;

	while(b > 0){

		remainder = b % 10;
		sum += remainder;
		b /= 10;
	}

	printf("Jumlah semua digit angka dari %d = %d\n", a, sum);
	*/

	//#################### do while loop ####################
	/*
	int i = 1;

	do{

		if(i % 3 ==0){

			printf("%d\t",i);
			
		}
		i++;

		if(i == 100){

			printf("\n");
		}

	} while(i<100);
	*/
	/*
	float p, r, t;
	char decision = 'y';

	do{

		printf("principal: ");
		scanf("%f", &p);

		printf("rate: ");
		scanf("%f", &r);

		printf("time: ");
		scanf("%f", &t);

		printf("Simple Interest: %.2f\n", (p * r * t) / 100);

		printf("Do you need calculate SI one more time? ('y' = yes, 'n' = no) ");
		scanf(" %c", &decision);
	} while(decision == 'y');
	*/
	/*	
	int sum = 0;

	for(int i = 0; i <= 100; i++){

		sum += i;
	}
	printf("Sum of all number is %d\n", sum);
	*/
	/*
	int a;

	printf("Tentukan tinggi setengah piramida: ");
	scanf("%d", &a);

	for(int i = 0; i < a; i++){

		for(int j = 0; j < i; j++){

			printf(" * ");
		}

		printf("\n");
	}
	*/

	//###################### infinite loop ######################
	/*
	short int a = 32766;

	while(a < 32768){

		printf("%d\n",a);
		a++;
	}
	*/

	//##################### break statements #######################
	/*
	int i;

	for(i = 0; i < 100; i++){

		if(i == 77){

			break;
		}
	}
		printf("Value of i: %d\n", i);
	*/
	//#################### continue statements ########################

	//print number between 0 and 10 that is not divisible by 3
												// >>
				//	<<
	/*for(int i = 0; i < 10; i++){

		if(i % 3 == 0){

			continue;
		}
		printf("%d\n", i);
	}
	*/

	//#################### switch statement ####################

	int i;

	printf("Input a number: ");
	scanf("%d", &i);

	switch(i){

		case 1:
			printf("Number is one.\n");
			break;

		case 2:
			printf("Number is two.\n");
			break;

		case 3:
			printf("Number is three.\n");
			break;

		case 4:
			printf("Number is four.\n");
			break;

		default:
			printf("Number is something else.\n");
	}

	return 0;
}
