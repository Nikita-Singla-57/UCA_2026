#include <stdio.h>
#include <string.h>

void url_encode(char *str, int true_length) {
	int i = true_length - 1;
	int j = strlen(str) - 1;
	while (i >= 0) {
		str[j] = str[i];
		if (str[i] == ' ') {
			str[j--] = '0';
			str[j--] = '2';
			str[j] = '%';
		}
		j--;
		i--;
	}
}


int main() {
	char str[] = "Hello this is great      ";
	int true_length = 19;
	url_encode(str, true_length);
	printf("%s\n", str);
	return 0;
}
