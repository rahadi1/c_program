#include <stdio.h>

int main()
{
	//####################conditional operator#################
	/*int a,b, max;
	printf("Input two number: ");
	scanf("%d%d", &a, &b);

	max = a > b ? a : b;
	printf("Largest of two numbers = %d\n", max);
	*/



	//#############sizeof operator##################
	/*printf("The size of integer in C = %lu\n", sizeof(int));
	*/


	//############implicit type conversion#############
	/*char ch = 'a';
	int a = 10;

	printf("ch value = %d\n", ch);
	printf("a + ch = %d\n", a + ch);

	unsigned char c = 257;
	printf("value of c = %c", c);
	*/

	//############# explicit type conversion ###############
	float f;
	float g;
	int a = 20, b = 3;

	f = a/b;
	g = (float) a/b;

	printf("20 : 3 = %f\n", f);
	printf("20 : 3 = %f\n", g);

	return 0;
}
