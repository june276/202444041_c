#include <stdio.h> 

void creed(char **ppc);
void target(char **ppc);

int main(){

	char *pc;
	printf("나의 생활 신조와 인생 좌우명 \n\n");

	creed(&pc); // 포인터 변수 pc의 시작 주소 전달하여 함수 호출(pc값은 변경)
	printf("생활 신조 : %s\n", pc);

	target(&pc); // 포인터 변수 pc의 시작 주소 전달하여 함수 호출(pc값은 변경)

	printf("인생 좌우명 : %s\n", pc);

	return 0;
}

void creed(char **ppc){
	*ppc = "오늘 하루도 최선을 다하자."; //이중 포인터 이름과 동일하게 선언
}

void target(char **ppc){
	*ppc = "후회하지 않는 삶을 살자";	//이중 포인터 이름과 동일하게 선언
}