#include <stdio.h> 

int main(){

	int n;
	char star = '*';
	char space = ' ';

	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			printf("%c", space);
		}

		for (int j = 0; j < (i*2)-1; j++)
		{
			printf("%c", star);
		}
		printf("\n");
	}
	

	return 0;
}