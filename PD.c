#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	char N[T];
	int i = 0, j = 0, k =0;
	unsigned int easy = 1;
	for(i=0;i<T;i++){
		scanf("%u",&N[i]);
	}
	for(i=0;i<T;i++){
    	if(N[i]==1){
			easy=0;
			break;
		}
	}
	if(easy)printf("easy\n");
	else printf("not easy\n");
    return 0;
}
