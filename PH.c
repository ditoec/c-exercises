#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int N = 0;
	scanf("%u",&N);
	unsigned int T[N];
	unsigned int B[N][1000];
	unsigned int i = 0, j = 0;
	for(i=0;i<N;i++){
		scanf("%u",&T[i]);
		for(j=0;j<T[i];j++){
			scanf("%u",&B[i][j]);
		}
	}
	unsigned int odd = 0;
	unsigned int even = 0;
	for(i=0;i<N;i++){
		for(j=0;j<T[i];j++){
			if(B[i][j]%2==0)even++;
			else odd++;
		}
		printf("Odd group : %u integer(s).\n",odd);
		printf("Even group : %u integer(s).\n",even);
		printf("\n");
 	even=0;
		odd=0;
	}
    return 0;
}
