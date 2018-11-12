#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
		unsigned int new_res =0, old_res = A[i][1], count =0;
		while(new_res!=A[i][1]){
		    new_res = (old_res * A[i][2]) % A[i][0];
			old_res = new_res; 
			count++;
		}
		printf("Case #%u: %u\n",(i+1),count);	
	}
    return 0;
}
