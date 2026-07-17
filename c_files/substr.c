#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int find_substring(const char *haystack, const char *needle) {
	int n = strlen(haystack);
	int m = strlen(needle);
	bool flag = false;
	for (int i = 0; i < n; i++) {
		int idx = 0; // index for needle 
		for (int j = i; j < m; j++) {
			if (needle[idx] != haystack[j]){
				flag = true;
				break;
			}
			idx++;
		}
		if (flag == false)
			return i;
		flag = false;
	}
	return -1;
}

int main() {
	char haystack[] = "Embedded Systems";
	char needle[] = "bed";
	printf("%d\n", find_substring(haystack, needle));
	return 0;
}
