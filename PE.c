#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int N = 0, P = 0;
	scanf("%u",&N);
	scanf("%u",&P);
	unsigned int B[N];
	unsigned int i = 0;
	for(i=0;i<N;i++){
		scanf("%u",&B[i]);
	}
	unsigned int pop = 0;
	for(i=0;i<N;i++){
		if(B[i]<P){
			pop++;
		}
	}
	printf("%u\n",pop);
    return 0;
}
