#include<stdio.h>
int main() {
	int a[1000];
	int n, tmp;
	int flag = 1;
	printf("Enter the number of integers>>");
	scanf_s("%d", &n);
	printf("Enter integers>>");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	while (flag) {
		flag = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) {
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				flag = 1;
			}
		}
	}
	printf("After sorting:");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}
