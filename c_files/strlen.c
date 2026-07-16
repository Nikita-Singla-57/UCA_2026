#include <stdio.h>
#include <string.h>

int my_strlen(const char *str) {
	int i = 0;
        while (str[i] != '\0') {
                i++;
        }
	return i;
}

int main() {
	char str[] = "Nikita Singla";	
        printf("%d\n", my_strlen(str));
	return 0;
}
