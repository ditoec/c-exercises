#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int N = 0;
	scanf("%u",&N);
	unsigned int R[N];
	unsigned int C[N];
	unsigned int totalR[N][10];
	unsigned int totalC[N][10];
	unsigned int i = 0, j = 0, k =0;
	for(i=0;i<N;i++){
		for(j=0;j<10;j++){
			totalR[i][j]=0;
			totalC[i][j]=0;
		}
		scanf("%u",&R[i]);
		scanf("%u",&C[i]);
		for(j=0;j<R[i];j++){
			for(k=0;k<C[i];k++){
				char chr;
				scanf(" %c",&chr);
				if(chr=='S'){
					totalR[i][j]=1;
					totalC[i][k]=1;
				}
			}
		}
	}
	for(i=0;i<N;i++){
		unsigned int cleanR=0,cleanC=0,clean=0;
		for(j=0;j<R[i];j++){
			if(totalR[i][j]==0)cleanR++;
		}
		for(k=0;k<C[i];k++){
			if(totalC[i][k]==0)cleanC++;
		}
		clean = (cleanR*C[i])+(cleanC*R[i])-(cleanR*cleanC);
		printf("Case #%u: %u\n",i+1,clean);
	}
    return 0;
}
