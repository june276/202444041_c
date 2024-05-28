#include <stdio.h> 
#define suNo 5

int main(){

	int A[suNo];
	int S[suNo];
	
	for(int i=0; i<suNo; i++){
		scanf("%d", &A[i]);
	}

	S[0] = A[0];
	for(int i=1; i<suNo; i++){
		S[i] = S[i-1] + A[i];
	}

	for(int i=0; i<suNo; i++){
		printf("%d ", S[i]);
	}

	return 0;
}