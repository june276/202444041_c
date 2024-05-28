#include <stdio.h> 

float area(int r){
	return r*r*3.14;
}

int main(){
	int r;
	float area_value;
	scanf("%d", &r);
	area_value = area(r);
	printf("%.2f", area_value);

	return 0;
}