#include<stdio.h>

int main() {
	int a, b, c, max, min;
		printf("Enter 3 integers>>");
		scanf_s("%d%d%d", &a, &b, &c);
		if (a >= b) {
			max = a;
			min = b;
			if (c > max) max = c;
			else if (c < min) min = c;
		}
		else {
			max = b;
			min = a;
			if (c > max) max = c;
			else if (c < min) min = c;
		}
		printf("max = %d, min = %d", max, min);
	return 0;
}
