#include<stdio.h>

int main() {
	int N;
	scanf_s("%d", &N);
	if (N % 2 == 0) {
		for (int i = 2; i <= N; i += 2)
			printf("%d", i);
	}
	else if (N % 2 == 1) {
		for (int i = 1; i <= N; i += 2)
			printf("%d", i);
	}
	return 0;
}
