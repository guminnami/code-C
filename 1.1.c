#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (; n <= 100; n++) {
		if (n % 2 == 0) {
			printf("%d ", n);
			}
		}
		return 0;
}
