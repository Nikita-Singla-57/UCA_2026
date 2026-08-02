#include <stdio.h>

int getByte(int x, int n) {
	return (x >> (n << 3)) & 0xFF;
}

int main() {
	int x;
	int n;
	scanf("%x", &x);
	scanf("%d", &n);
	printf("%x\n", getByte(x, n));

	return 0;
}
