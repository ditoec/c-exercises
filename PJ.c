#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	unsigned int time[T][3];
	int i = 0, j = 0;
	for(i=0;i<T;i++){
		for(j=0;j<3;j++){
			scanf("%u",&time[i][j]);
		}
	}
	unsigned int count = 0;
	for(i=0;i<T;i++){
		if(time[i][1]>time[i][2])count++;
	}
	printf("%u\n",count);
    return 0;
}
