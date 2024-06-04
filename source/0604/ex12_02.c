#include <stdio.h> 

int main(){

	int cnt, size, choise;
	char *task[] = {
		"Desk",
		"Computer",
		"Books",
		"USB",
		"EXIT"
	};

	size = sizeof(task) / sizeof(task[0]);	// 배열 요소의 개수 산출

	for(cnt=0; cnt<size; cnt++){
		printf("%d.%s\n", cnt+1, task[cnt]);
	}
	while(1){
		printf("\n숫자입력(1~5) : ");
		scanf("%d", &choise);
		if(choise<1 || choise>5){
			printf("입력 숫자 오류!\n");
			continue;
		}else if(choise ==  5){
			break;
		}else{
			printf("선택된 단어는 \"%s\"입니다.\n", task[choise-1]);
		}
	}

	return 0;
}