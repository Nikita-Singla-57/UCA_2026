#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int bit[32] = {0};
	int j = 31;
	while (j >= 0) {
		for (int i = 0; i < n; i++) {
			int x = arr[i];
			if (x % 2 == 1) {
				bit[j]++;
			}
			arr[i] = arr[i] >> 1;
		}
		j--;
	}	
	int ans = 0;
	int pow = 1;
	for (int i = 31; i >= 0; i--) {
		if (bit[i] % 3 == 1) {
			ans += pow;
		}
		pow *= 2;
	}
	printf("%d\n", ans);

	return 0;
}
