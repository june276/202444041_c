#include <stdio.h> 

int Add();
int G_a;
int G_b;

int main(){

	int sum = 0;
	G_a = 10;
	G_b = 20;
	sum = Add();

	printf("main 함수 영역\n");
	printf("Add() 로부터 덧셈 연산 결과 반환\n");
	printf("결과 : %d + %d = %d \n", G_a, G_b, sum);

	return 0;
}

int Add(){
	int hap = 0;
	hap = G_a + G_b;
	printf("Add 함수 영역\n");
	printf("두 정수 덧셈 연산 수행\n");
	return hap;
}