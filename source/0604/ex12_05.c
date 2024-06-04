#include <stdio.h> 

int hap(int a, int b);
int cha(int a, int b);

int main(){

	int result;
	int(*fp)(int, int);

	fp = hap;
	result = fp(100, 200);
	printf("덧셈 연산 결과 : %d\n", result);

	fp = cha;
	result = fp(100, 200);
	printf("뺄셈 연산 결과 : %d\n", result);

	return 0;
}

int hap(int a, int b){
	return a+b;
}

int cha(int a, int b){
	return a-b;
}