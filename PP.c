#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void left(int j, int N){
	int k;
	for(k=0;k<(2*N-1);k++){			
		if(k==2*j)printf("*");
		else printf(".");
	}
	printf("\n");	
}

void right(int j, int N){
	int k;
	for(k=0;k<(2*N-1);k++){			
		if(k==2*(N-j-1))printf("*");
		else printf(".");
	}
	printf("\n");	
}


int main()
{    
	int T = 0;
	scanf("%d",&T);
	int N[T];
	char C[T];
	int i = 0, j = 0, k = 0;
	for(i=0;i<T;i++){
		scanf(" %c",&C[i]);
		scanf("%d",&N[i]);
	}
	for(i=0;i<T;i++){
		printf("Case #%d:\n",(i+1));
    	for(j=0;j<N[i];j++){
    		if(C[i]=='>')left(j,N[i]);
    		else if(C[i]=='<')right(j,N[i]); 
    	}
		for(j=0;j<N[i];j++){
    		if(C[i]=='>')right(j,N[i]);
    		else if(C[i]=='<')left(j,N[i]); 
    	}	
    	printf("\n");
	}
    return 0;
}
