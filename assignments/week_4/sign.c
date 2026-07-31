#include <stdio.h>

int sign(int x) {
	return (x>>31) | (!!x);
}

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("%d\n", sign(n));
	return 0;
}
