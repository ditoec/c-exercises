#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int T[3];
	unsigned int i = 0, j = 0;
	for(i=0;i<3;i++){
		scanf("%u",&T[i]);
	}
	for(i=0;i<3;i++){
		if(T[i]==1)printf("I love fruit\n");
		else if(T[i]==2)printf("I love vegetable\n");
		else if(T[i]==3)printf("No comment\n");
	}
    return 0;
}
