#include<stdio.h>

int main() {
	while (1) {
		int n1, n2, j=0;
		int arr[1000];
		printf("Enter two integers>>");
		scanf_s("%d%d", &n1, &n2);
		if (n1 == 0 && n2 == 0) break;
		for (int i = 1; i <= n1 && i <= n2; i++) {
			if (n1 % i == 0 && n2 % i == 0) {
				arr[j] = i;
				j++;
			}
		}
		arr[j] = 0;
		printf("Common divisors>>");
		for (int i = 0; i < j; i++) {
			printf("%d", arr[i]);
			if (arr[i + 1] != 0) {
				printf(",");
			}
		}
		printf("\n");
	}
	return 0;
}
