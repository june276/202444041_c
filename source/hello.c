#include <stdio.h>

#define S(X) (X)*(X)

int main(void)
{
	// int x;	// 첫 번째 정수를 저장할 변수
	// int y; 	// 두 번째 정수를 저장할 변수
	// int sum;	// 두 정수의 합을 저장하는 변수
	// x = 100;
	// y = 200;
	// sum = x + y;
	// printf("%d + %d = %d",x, y, sum);
	// printf("두 수의 합 : %d",x, y, sum);

	int q;
	q = 4;

	printf("%d %d", S(q), S(q+1));

	return 0;

}