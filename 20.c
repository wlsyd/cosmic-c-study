#include<stdio.h>

int main() {
	while (1) {
		char arr[1000];
		char* pt;
		int num = 0, total = 0, flag = 1;
		printf("Enter an expression>>");
		gets(arr);
		if (arr[0] == '0') break;
		pt = arr;
		while (*pt != '\0') {
			if (*pt >= 48 && *pt <= 57) {
				if (num == 0) {
					num = *pt - 48;
				}
				else {
					num = num * 10 + *pt - 48;
				}
			}
			else if (*pt == '-' || *pt == '+') {
				if (flag == 1) {
					total += num;
					num = 0;
				}
				else {
					total -= num;
					num = 0;
				}
			}
			if (*pt == '-') {
				flag = 0;
			}
			else if (*pt == '+') {
				flag = 1;
			}
			pt++;
		}
		if(flag==1)
			printf("values:%d\n", total+num);
		else
			printf("values:%d\n", total-num);
	}



	return 0;
}
