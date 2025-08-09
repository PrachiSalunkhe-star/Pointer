#include<stdio.h>

int sum(int, int);
int diff(int, int);
int product(int, int);

// int (*ptr)(int, int);

// int test(char, char);
// int (*ptr)(char, char);

// char test(char, char);
// char (*ptr)(char, char);

// void test(int, int);
// void (*ptr)(int, int);

int main(void)
{
	//int (*arr[3])(int, int) = {sum, diff, product};

	int (*arr[3])(int, int);
	arr[0] = sum;
	arr[1] = diff;
	arr[2] = product;

	printf("sum = %u, arr[0] = %u\n", sum, arr[0]);
	printf("diff = %u, arr[1] = %u\n", diff, arr[1]);
	printf("product = %u, arr[2] = %u\n", product, arr[2]);

	printf("sum = %d\n", arr[0](20, 10));
	printf("diff = %d\n", arr[1](20, 10));
	printf("product = %d\n", arr[2](20, 10));

	return 0;
}

int sum(int num1, int num2)
{
	return num1 + num2;
}

int diff(int num1, int num2)
{
	return num1 - num2;
}

int product(int num1, int num2)
{
	return num1 * num2;
}









