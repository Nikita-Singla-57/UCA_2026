#include <stdio.h>

int bitAnd(int x, int y) {
	return ~(~x | ~y);
}

int main() {
	int a;
	int b;
	printf("Enter first number: ");
        scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("%d\n", bitAnd(a, b));
	return 0;
}	
