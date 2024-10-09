#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX 100
int stack[MAX];
int top = -1;

void push(int v) {
		top++;
		stack[top] = v;
}

int pop() {
	int a;
	top--; 
	a = stack[top + 1]; 
	return a;
}

int main() {
	int num=0, m, n;
	char arr[100];
	while (1) {
		int flag = 1;
		printf("Enter a postfix expression>> ");
		gets(arr);
		if (strcmp(arr, "0") == 0) break;
		else {
			for (int i = 0; i < strlen(arr); i++) {
				if (arr[i] >= '0' && arr[i] <= '9') {
					num = num * 10;
					num = num + arr[i] - '0';
				}
				else if (arr[i] == ' ') {
					if (num > 0) {
						push(num);
						num = 0;
					}
					else continue;
				}
				else {
					if (top <= 0) {
						printf("Invalid expression\n");
						flag = 0;
						break;
					}
					else {
						n=pop(); m=pop();
						if (arr[i] == '+') push(m + n);
						else if (arr[i] == '-') push(m - n);
						else if (arr[i] == '*') push(m * n);
						else push(m / n);
					}
				}
			}
			if(flag) printf("%d\n", pop());

		}
	}
	return 0;
}
