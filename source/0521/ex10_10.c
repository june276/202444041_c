#include <stdio.h>
#define AL 5 

int main(){

	int s_list[AL] = {5,4,3,2,1};
	int a, b, temp, sort;

	printf("초기> 배열의 요소: 5 4 3 2 1\n");
	printf("\n [for문으로 선택 정렬 수행]\n");

	for(a=0; a<AL-1; a++){
		sort = a;
		for(b=a+1; b<AL; b++){
			if(s_list[b] < s_list[sort]){
				sort = b;
			}
		}
		temp = s_list[a];
		s_list[a] = s_list[sort];
		s_list[sort] = temp;
	}
	printf("결과> 배열 요소 : ");
	for(a=0; a<AL; a++){
		printf("%d ", s_list[a]);
	}

	return 0;
}