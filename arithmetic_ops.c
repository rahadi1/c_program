#include <stdio.h>

int main(void)
{
	int a,b;

	printf("Input angka pertama (A) : ");
	scanf("%d", &a);

	printf("Input angka kedua (B) : ");
	scanf("%d", &b);

	printf("A + B = %d\n", a + b);
	printf("A - B = %d\n", a - b);
	printf("A x B = %d\n", a * b);
	printf("A : B = %d\n", a / b);
	printf("A mod B = %d\n", a % b);
}
