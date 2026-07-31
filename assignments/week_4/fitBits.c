#include <stdio.h>

int fitBits(int x, int n) {
	return !((~x+1)>>n);
}

int main(){
	int x;
	int n;
	printf("enter num1: ");
	scanf("%d", &x);
	printf("enter num2: ");
	scanf("%d", &n);
	printf("%d\n", fitBits(x, n));

	return 0;
}
