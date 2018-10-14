#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	int T = 0;
	scanf("%d",&T);
	int N[T];
	int i = 0, j = 0, k = 0;
	for(i=0;i<T;i++){
		scanf("%d",&N[i]);
	}
	for(i=0;i<T;i++){
    	for(j=0;j<N[i];j++){
    		for(k=0;k<N[i];k++){			
				if((j==0||j==N[i]-1)||(k==0||k==N[i]-1)||(k==j||(k==(N[i]-j-1))))printf("*");
				else printf(" ");
			}
			printf("\n");
    	}	
    	printf("\n");
	}
    return 0;
}
