#include<stdio.h>

int main() {
	int h, m, s, h1, m1, s1, h2, m2, s2;
	while (1) {
		printf("Enter two times(h m s h m s)>>");
		scanf_s("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
		if (h1 == 0) break;
		h = h1 + h2;
		m = m1 + m2;
		s = s1 + s2;
		m += s / 60;
		s %= 60;
		h += m / 60;
		m %= 60;
		if (h > 12) h %= 12;
		else if (h == 12) h = 12;
		printf("%d %d %d\n", h, m, s);
	}
	return 0;
}
