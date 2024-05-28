#include <stdio.h> 

void print_equals(int cnt){
	for (int i=0; i<cnt; i++){
		printf("==============\n");
	}
}

int main(){
	int cnt;
	scanf("%d", &cnt);
	print_equals(cnt);	

	return 0;
}