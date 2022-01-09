#include <stdio.h>
#include <iostream>
int main() {
	int n = 0;
	int res = 0;
	scanf_s("%d", &n);
	while (1) {
		if (n == 0) break;
		res += n % 10;
		n /= 10;
	}
	printf("%d", res);

	return 0;
}