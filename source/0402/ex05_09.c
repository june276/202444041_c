#include <stdio.h>
int main()
{
	int num1, num2, max, min;

	printf("정수 2개를 차례로 입력 \n");

	printf("첫 번째 정수 : ");
	scanf("%d", &num1);

	printf("두 번째 정수 : ");
	scanf("%d", &num2);

	// max = num1>num2 ? num1 : num2;
	// min = num1<num2 ? num1 : num2;

	if (num1>num2)
	{
		max = num1;
		min = num2;
	}else{
		max = num2;
		min = num1;
	}
	

	printf("둘 중 큰 수 : %d\n", max);
	printf("둘 중 작은 수 : %d\n", min);

	return 0;
}