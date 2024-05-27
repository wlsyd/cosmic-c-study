#include<stdio.h>

void right(a, b, c) {
	if (a * a == b * b + c * c) {
		printf("Result >> Right");
	}
	else {
		printf("Result >> Wrong");
	}
	printf("\n");
}

int main() {
	while (1) {
		int n1, n2, n3;
		printf("Enter three integers>>");
		scanf_s("%d%d%d", &n1, &n2, &n3);
		if (n1 == 0 || n2 == 0 || n3 == 0) break;
		if (n1 >= n2 && n1 >= n3) {
			right(n1, n2, n3);
		}
		else if (n2 >= n1 && n2 >= n3) {
			right(n2, n1, n3);
		}
		else if (n3 >= n1 && n3 >= n2) {
			right(n3, n1, n2);
		}
	}
	return 0;
}
