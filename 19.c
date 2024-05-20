#include<stdio.h>
#include<math.h>

int main() {
	int b1, n, b2, a[1000];
	while (1) {
		int i = 0, sum=0;
		printf("Enter base-from, number, base-to>>");
		scanf_s("%d %d %d", &b1, &n, &b2);
		if (b1 == 0 && b2 == 0) break;
		while (1) {
			sum += (n % 10) * pow(b1, i);
			n = n / 10;
			if (n == 0) break;
			else i++;
		}
		i = 0;
		while (1) {
			a[i] = sum % b2;
			sum /= b2;
			if (sum == 0) break;
			else i++;
		}
		for (int k = i; k >= 0; k--) printf("%d", a[k]);
		printf("\n");
	}
	return 0;
}
