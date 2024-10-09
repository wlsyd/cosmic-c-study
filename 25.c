#include<stdio.h>
#include<string.h>

int main() {
	char arr[100];
	while (1) {
		int cnt1 = 0, cnt2=0;
		printf("Enter a parens>> ");
		scanf_s("%s", arr, 100);
		if (strcmp(arr, "quit") == 0) break;
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == '(') cnt1++;
			else cnt2++;
		}
		printf("Result>> ");
		if (cnt1 == cnt2) printf("Matched\n");
		else printf("Unmatched\n");
	}
	return 0;
}
