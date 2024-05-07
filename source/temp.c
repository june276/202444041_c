#include <stdio.h>

int plus(int plus_a, int plus_b); // 함수의 원형

int main()
{
	int a=10, b=20;
	int result;
	// scanf("%d %d", &a, &b);	// scanf는 제어문자(e.g. \n)를 사용하면 안된다. 공백은 구분을 위해서만 사용한다.
	// scanf("%d", &b);
	result = plus(a,b);
	printf("%-7d", result);
	printf("%d", result);
	
	// printf("a: %d b: %d", a, b);
	return 0;
}

int plus(int plus_a, int plus_b)
{
	return plus_a + plus_b;
}