#include <stdio.h> 

int func(int n);

int main(){

	int n;
	scanf("%d", &n);
	
	printf("%d", func(n));

	return 0;
}

int func(int n){
	if (n==0){
		return 0;
	}
	return n + func(n-1);
}