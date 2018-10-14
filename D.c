#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{    
	unsigned int N[3];
	int i = 0, j = 0, k =0;
	for(i=0;i<3;i++){
		scanf("%u",&N[i]);
	}
	for(i=0;i<3;i++){
    	if(N[i]%111!=0)printf("0.%03u...\n",N[i]);
    	else printf("0.%u...\n",N[i]/100);	
	}
    return 0;
}
