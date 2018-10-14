#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	int N = 0;
	scanf("%d",&N);
	int i = 0, j = 0;
	char x = 65;
    for(i=0;i<N;i++){
    	for(j=1;j<N-i;j++){
    		printf(" ");
    	}
    	for(j=0;j<i+1;j++){
    		printf("%c",x);
    		if(j!=i)printf(" ");
    	}
    	printf("\n");
    	x++;
    	if(x>90)x=65;
	}
    return 0;
}
