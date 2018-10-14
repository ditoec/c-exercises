#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	char N[31];
	scanf("%s",N);
	int len = strlen(N);
	int i;
	for(i=0;i<(30-len);i++){
    	printf("0");
	}
	printf("%s\n",N);
    return 0;
}
