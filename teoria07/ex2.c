#include <stdio.h>
int main() {
	char c = 'A';
	for (int i = 0; i < 50; i++) {
		printf("%c", c);
		c++;
	}
	printf("\n");
}
