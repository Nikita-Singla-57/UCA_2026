#include <stdio.h>

int conditionals(int x, int y, int z) {
	int mask = ~(!x) + 1;
	return (~mask & y) | (mask & z);
}

int main(){
	int x;
	int y;
	int z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	printf("%d\n", conditionals(x, y, z));

	return 0;
}
