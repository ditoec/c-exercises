#include<stdio.h>

int main() {
	int a;
	int b;
	int c;
	char d[11];
	char e[11];
	char f[11];
	
	scanf("%10[A-Za-z]%d%[A-Za-z]%8d%[A-Za-z]%8d", &d, &a, &e, &b, &f, &c);
	printf("%-10s %8d\n", d, a);
	printf("%-10s %8d\n", e, b);
	printf("%-10s %8d\n", f, c);

	return 0;
}
