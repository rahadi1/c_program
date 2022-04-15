#include <stdio.h>

int main(void)
{
	int penghasilan = 5000000;
	int pengeluaran = 2000000;
	int ditabung = 3000000;

	printf("Penghasilan: %d, Pengeluaran: %d, Ditabung: %d\n", penghasilan, pengeluaran, ditabung);

	printf("Octal equivalent of %d = %o\n", penghasilan, penghasilan);
	printf("Hexadecimal equivalent of %d = %x\n", penghasilan, penghasilan);

	printf("Path: C:\\Users\\X\n");
	
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Number you entered: %d\n", n);

	char m;
	printf("Enter a character: ");
	scanf(" %c", &m);
	printf("Character you entered: %c\n", m);

	return 0;
}
