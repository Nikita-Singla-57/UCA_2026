#include <stdio.h>

int isPower2(int n) {
	return !(n & (n - 1));
}

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("%d\n", isPower2(n));
	return 0;
}
