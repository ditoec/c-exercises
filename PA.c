#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{    
	unsigned int Q = 0;
	scanf("%d",&Q);
	unsigned int N = 1, i =0;
    for(i=0;i<Q;i++){
		N=(N*2)+1;
	}
	printf("%d\n",N);
    return 0;
}
