#include <stdio.h> 

#define MAX_NUMBERS 100
#define RANGE 10

void readNumbers(int numbers[], int n);
void calcFrequency(int numbers[], int n, int frequency[]);
void printFrequency(int frequency[], int range);

int main(){
	int n;
	printf("Enter the number of element (up to %d) : ", MAX_NUMBERS);
	scanf("%d", &n);

	if (n<1 || n>MAX_NUMBERS){
		printf("valid number of elements between 1 and %d\n", MAX_NUMBERS);
		return 1;
	}

	int numbers[n];
	readNumbers(numbers, n);

	int frequency[RANGE] = {0};
	calcFrequency(numbers, n, frequency);

	printFrequency(frequency, RANGE);

	
	return 0;
}

void readNumbers(int numbers[], int n){
	printf("Enter %d numbers (0-9) : ", n);
	for (int i=0; i<n; i++) {
		scanf("%d", &numbers[i]);
		if (numbers[i]<0 || numbers[i]>9){
			printf("invalid number: %d Please enter 0 between 9\n", numbers[i]);
			i--;
		}
	}
}

void calcFrequency(int numbers[], int n, int frequency[]){
	for(int i=0; i<n; i++){
		frequency[numbers[i]]++;
	}
}

void printFrequency(int frequency[], int range){
	for (int i=0; i<range; i++){
		printf("Number %d: %d times\n", i, frequency[i]);
	}
}