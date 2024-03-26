#include <stdio.h>

int plus(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int devide(int a, int b);

int main()
{
	int a, b;
	// int result;

	scanf("%d %d", &a, &b);

	// result = plus(a, b);
	printf("%d + %d = %d\n", a, b, plus(a, b));
	printf("%d - %d = %d\n", a, b, minus(a, b));
	printf("%d * %d = %d\n", a, b, multi(a, b));
	printf("%d / %d = %d\n", a, b, devide(a, b));

	return 0;
}

int plus(int a, int b){
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int multi(int a, int b) {
	return a * b;
}
int devide(int a, int b){
	return a / b;
}