#include <stdio.h> 

int get_integer();

int main(){

	int A = get_integer();
	int B = get_integer();
	printf("%d + %d = %d", A, B, A+B);

	return 0;
}

int get_integer(){
	int a;
	scanf("%d", &a);
	return a;
}