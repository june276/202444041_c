#include <stdio.h> 

int main(){

	int n;
	scanf("%d", &n);
	int i = 2;
	int result = 0;
	while (1)
	{
		result += i;
		if (i>=n)
		{
			break;
		}
		i += 2;
	}
	printf("%d", result);

	return 0;
}