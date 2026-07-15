#include <stdio.h>

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	int a = 0;
	int b = 1;
	if (n == 0 || n == 1) 
		printf("%d", 0);
	int ans = 0;
	if (n > 1) {
		while (b <= n) {
			int c = a + b;
			a = b;
			b = c;
			if (c % 2 == 0 && c <= n)
				ans += c;
		}
	}
	printf("%d", ans);
	return 0;
}

