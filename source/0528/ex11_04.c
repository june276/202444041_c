#include <stdio.h> 

int main(){

	int a = 30;
	int *p = NULL;

	printf("a = 30, p = &a일 때\n");

	p = &a;
	printf("1. 포인터 p의 주소값 : %u\n", p);
	printf("2. 포인터가 가리키는 *p의 데이터값 %u\n", *p);
	printf("\n*p = 50일 때\n");

	*p = 50;
	printf("1. 포인터 p의 주소값 : %u\n", p);
	printf("2. 포인터가 가리키는 *p의 데이터값 %u\n", a);

	return 0;
}