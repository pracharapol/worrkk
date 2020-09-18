#include<conio.h>
#include<stdio.h>
void price() {
	int x, y = 5500;
	printf("\t\t\t\tEnter number of times :");
	scanf_s("%d", &x);
	if (x >= 0) {
		printf("\t\t\t\tPrices = %d", y * x);
		int z = y * x;
		if (z > 16500) {
			int a = (z / 5500) - 3;
			printf("\n\t\t\t\tFines = %d", 300 * a);
			int b = 300 * a;
			printf("\n\t\t\t\tAll prices = %d", b + z);
		}
	}
	else if (x < 0) {
		printf("\t\t\t\tPlease try again");
	}
}
void thank() {
	char x[] = "\t\t\t\tthank you";
	printf("%s", x);



}
int main() {
	printf("\t\t\t\t---------------Collect rent-----------------\n");
	price();
	printf("\n");
	thank();
	printf("\n");
	printf("\t\t\t\t--------------------------------------------");

	return 0;
}