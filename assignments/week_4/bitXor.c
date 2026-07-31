#include <stdio.h>

int bitXor(int x, int y) {
	return ~(~(x & ~y) & ~(~x & y));
}

int main() {
	int a;
	int b;
	printf("Enter number: ");
	scanf("%d", &a);
	printf("Enter number: ");
	scanf("%d", &b);
	printf("%d\n", bitXor(a, b));
	return 0;
}
