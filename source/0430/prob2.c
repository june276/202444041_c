#include <stdio.h> 

int main(){
	int even = 0;
	int odd = 0;

	int temp;
	while(1){
		scanf("%d", &temp);
		if(temp==0){
			break;
		}
		if (temp%2) {
			odd++;
		}else{
			even++;
		}
	}
	printf("odd: %d\neven: %d", odd, even);
	return 0;
}