#include <stdio.h>

int main(void)
{
	/*int penghasilan = 5000000;
	int pengeluaran = 2000000;
	int ditabung = 3000000;

	printf("Penghasilan: %d, Pengeluaran: %d, Ditabung: %d\n", penghasilan, pengeluaran, ditabung);

	printf("Octal equivalent of %d = %o\n", penghasilan, penghasilan);
	printf("Hexadecimal equivalent of %d = %x\n", penghasilan, penghasilan);

	printf("Path: C:\\Users\\X\n");
	
*/

/*
	int e;
	char f;

	printf("Input your age: ");
	scanf("%d", &e);

	printf("Input your sex (f or m): ");
	scanf(" %c", &f);	

	if(f=='m'){

		printf("You are a 31 years old male\n");
	}
	else{

		printf("You are a 31 years old female\n");
	}
*/

 	//formatting integer input
	/*int a,b;

	printf("Input your age and height(cm): ");
	scanf("%2d%3d", &a, &b);

	printf("Your age are: %d\n", a);
	printf("Your height are: %d\n", b);
*/

	//formatting integer and floating output
	/*int a;
	float b;

	printf("Input a random decimal number: ");
	scanf("%d", &a);

	printf("Input a random float number: ");
	scanf("%f", &b);

	printf("The decimal number: %2d\n", a);
	printf("The float number: %.3f\n", b);
	*/

	char str[20];
	printf("Input a string: ");
	scanf("%4s", str);

	printf("You type: %4s\n", str);

	return 0;
}
