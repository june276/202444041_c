#include <stdio.h>
int main(void){
	int num = 1;
	int result = 0;
	while (num<=10)
	{
		result += num;
		num++;
	}
	printf("1 부터 10까지의 합 = %d\n", result);
	printf("while문이 끝난 후의 num 값 = %d", num);

	return 0;
}