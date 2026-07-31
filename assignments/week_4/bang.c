#include <stdio.h>

int bang(int x) {
	return ~((x | (~x+1)) >> 31) + 1;
}

int main(){
	int n;
	printf("enter num: ");
	scanf("%d", &n);
	printf("%d\n", bang(n));

	return 0;
}
