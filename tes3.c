#include<stdio.h>

int main() {
	int a;
	int b;
	int c;
	char d[100];
	char e[100];
	char f[100];
	
	scanf("%[A-Za-z]%d%[A-Za-z]%d%[A-Za-z]%d", &d, &a, &e, &b, &f, &c);
	printf("%-10s %d\n", d, a);
	printf("%-10s %d\n", e, b);
	printf("%-10s %d\n", f, c);
	
	return 0;
}
