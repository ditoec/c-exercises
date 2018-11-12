#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mult_Mod (unsigned long long int** X,unsigned long long int** Y, unsigned long long int** res, unsigned int size, unsigned int mod){
	unsigned int i =0, j = 0, k = 0;
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	    	unsigned long long int Z = 0;
	        for (k = 0; k < size; k++) {
	            Z += (X[i][k] * Y[k][j]);
	        }
	        res[i][j] = Z % mod;
	    }
	}
}



int main()
{    
	unsigned int T = 0;
	unsigned int prime = 1000000007;
	scanf("%u",&T);
	unsigned int N[T];
	unsigned long long int** A[T];
	unsigned int i = 0, j = 0, k = 0, l = 0;
	for(i=0;i<T;i++){
		scanf("%u",&N[i]);
		A[i] = (unsigned long long int**)malloc(N[i] * sizeof(unsigned long long  int*));
		for(j = 0; j < N[i]; j++)
		{
		    A[i][j] = (unsigned long long int*)malloc(N[i]*sizeof(unsigned long long int));
		    for(k = 0; k < N[i]; k++){
		    	scanf("%llu",&A[i][j][k]);
			}
		}
	}
	for(i=0;i<T;i++){
		printf("Case #%u:\n",i+1);
		unsigned long long int** Y = (unsigned long long int**)malloc(N[i]*sizeof(unsigned long long int*));
	    unsigned long long int** res = (unsigned long long int**)calloc(N[i],sizeof(unsigned long long  int*));
		for(j=0;j<N[i];j++){
			Y[j] = (unsigned long long int*)malloc(N[i]*sizeof(unsigned long long int));
			res[j] = (unsigned long long  int*)calloc(N[i],sizeof(unsigned long long int));
			for(k=0;k<N[i];k++){
				Y[j][k] = A[i][j][k];
				if(N[i]==1)res[j][k] = A[i][j][k];
			}
		}
		for(j=1;j<N[i];j++){
			mult_Mod(A[i],Y,res,N[i],prime);
			for(k=0;k<N[i];k++){
				for(l=0;l<N[i];l++){
					Y[k][l] = res[k][l];
					res[k][l] = 0;
				}
			}	
		}
		for(j=0;j<N[i];j++){
			for(k=0;k<N[i];k++){
				if((k+1)%N[i]==0)printf("%llu\n",Y[j][k]);
				else printf("%llu ",Y[j][k]);
			}
		}
	}
    return 0;
}
