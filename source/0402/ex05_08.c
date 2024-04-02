#include <stdio.h>
int main()
{
	int input, year;
	printf("윤년이면 1, 평년이면 0 출력\n");

	printf("%d", &input);

	printf("연도입력: ____ \b\b\b\b\b");
	scanf("%d", &input);
	year = (!(input % 4) && (input % 100)) || !(input % 400);

	printf("입력한 %d년은 %s에 해당합니다. \n", input, year ? "윤년" : "평년");

	return 0;
}