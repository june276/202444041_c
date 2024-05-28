#include <stdio.h> 

int main(){

	char str[20];
	int cnt, length = 0;
	printf("문자열을 20byte 이하로 작성 : ");
	scanf("%s", str);
	for(int i=0; str[i]!='\0'; i++){
		length++;
	}
	printf("\n");
	printf("문자열 길이 : %dbyte", length);

	return 0;
}