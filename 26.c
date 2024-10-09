#include<stdio.h>
int arr[100];
int k = 0;

void f(int a) {
	int cnt = 0;
	printf("Prime numbers: ");
	for (int i = 2; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) cnt++;
		}
		if (cnt == 2) {
			printf("%d ", i);
			arr[k++] = i;
		}
		cnt = 0;
	}
	printf("\n");
}

int main() {
	int n, m;
	while (1) {
		printf("Enter two integers>> ");
		scanf_s("%d%d", &n, &m);
		if (n == 0 && m == 0) break;
		else {
			int gcd = 1;
			if (n > m) f(m);
			else f(n);
			printf("(1, %d, %d) ", n, m);
			int i = 0;
			while (i<k) {
				if (n % arr[i] == 0 && m % arr[i] == 0) {
					n /= arr[i]; m /= arr[i]; gcd *= arr[i];
					printf("(%d, %d, %d) ", gcd, n, m);
				}
				else i++;
			}
			printf("\nGCD=%d, LCM==%d\n", gcd, m * n * gcd);
		}
	}
	return 0;
}
