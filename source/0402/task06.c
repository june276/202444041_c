#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int sum = 0;
	int i=1;

	// for (int i = 1; i <= 10; i++)
	// {
	// 	sum += i;
	// }

	while (i<=10)
	{
		sum += i;
		i ++;
	}

	printf("%d", sum);
	return 0;
}