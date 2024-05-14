#include<stdio.h>
int main() {
	int a[1000];
	int n, min,tmp;
	printf("Enter the number of integers>>");
	scanf_s("%d", &n);
	printf("Enter integers>>");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = i+1; j < n; j++) {
			if (a[min] > a[j]) min = j;
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
	printf("After sorting:");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}
