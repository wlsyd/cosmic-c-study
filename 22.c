#include<stdio.h>
#include<math.h>

int main() {

	while (1) {
		int n, b, a, flag=0;
		printf("Enter a number and a base>>");
		scanf_s("%d %d", &n, &b);
		if (n == 0 && b == 0) break;
		for (int i = 5; i >= 0; i--) {
			a = pow(b, i);
			if (n >= a) {
				if (n / a > 9) {
					printf("%c", n / a + 87);
					n = n % a;
				}
				else{
					printf("%d", n / a);
					n = n % a;
				}
				flag = 1;
			}
			else if (n < a && flag==1)
				printf("0");
		}
		printf("\n");
	}
	return 0;
}
