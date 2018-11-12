#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int N = 0;
	scanf("%u",&N);
	unsigned int T[N];
	char B[N][101];
	unsigned int i = 0, j = 0;
	for(i=0;i<N;i++){
		scanf("%u",&T[i]);
		scanf("%s",B[i]);
	}
	unsigned int lili = 0;
	unsigned int bibi = 0;
	for(i=0;i<N;i++){
		for(j=0;j<T[i];j++){
			if(B[i][j]=='B')bibi++;
			else if(B[i][j]=='L')lili++;
		}
		if(bibi>lili)printf("Bibi\n");
		else if(lili>bibi)printf("Lili\n");
		else printf("None\n");
		bibi=0;
		lili=0;
	}
    return 0;
}
