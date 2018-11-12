#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int N = 0;
	scanf("%u",&N);
	unsigned int* A[N];
	unsigned int SQ[N][2];
	unsigned int* Q1[N];
	unsigned int* Q2[N];
	unsigned int i = 0, j = 0, k =0;
	for(i=0;i<N;i++){
		scanf("%u",&SQ[i][0]);
		scanf("%u",&SQ[i][1]);
		A[i] = (unsigned int*)malloc(SQ[i][0] * sizeof(unsigned int));
		Q1[i] = (unsigned int*)malloc(SQ[i][1] * sizeof(unsigned int));
		Q2[i] = (unsigned int*)malloc(SQ[i][1] * sizeof(unsigned int));
		for(j=0;j<SQ[i][0];j++){
			scanf("%u",&A[i][j]);
		}
		for(j=0;j<SQ[i][1];j++){
			scanf("%u",&Q1[i][j]);
			scanf("%u",&Q2[i][j]);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<SQ[i][1];j++){
			unsigned int total=0;
			for(k=Q1[i][j]-1;k<Q2[i][j];k++){
				total+=A[i][k];
			}
			printf("%u\n",total);
		}
	}
    return 0;
}
