#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	unsigned int res[T];
	unsigned int num[T];
	int i = 0, j = 0, k = 0;
	for(i=0;i<T;i++){
		scanf("%u",&num[i]);
		scanf("%u",&res[i]);
	}
	unsigned int max = 1000000000;
	unsigned int min = 1;
	for(i=0;i<T;i++){
		if(res[i]==1&&num[i]<max)max=num[i];
		if(res[i]==0&&num[i]>min)min=num[i]+1;
	}
	printf("%u %u\n",min,max);
    return 0;
}
