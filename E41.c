#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{    
	unsigned int N = 0;
	scanf("%u",&N);
	unsigned int A[N][3];
	unsigned int i = 0, j = 0, k =0;
	for(i=0;i<N;i++){
		scanf("%u",&A[i][0]);
		scanf("%u",&A[i][1]);
		scanf("%u",&A[i][2]);
	}
	for(i=0;i<N;i++){
		j = 1;
		unsigned int y = A[i][2] % A[i][0];
		while(1){
			if((((unsigned int)pow(y,j)-1)%A[i][0])==0)break;
			j++;	
		}
		printf("Case #%u: %u\n",(i+1),j);	
	}
    return 0;
}
