#include <stdio.h> 
#include <math.h>

int main(){

	int cnt = 0;
	int sum = 0;
	int input;

	while(1){
		scanf("%d", &input);
		if (input == 0)
		{
			break;
		}
		if (input%2 == 1)
		{
			sum += input;
			cnt ++;
		}
	}
	printf("홀수의 합 = %d\n홀수의 평균 = %d", sum, sum/cnt);


	return 0;
}