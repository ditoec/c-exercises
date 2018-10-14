#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	int N[T];
	int i = 0, j = 0, k =0;
	for(i=0;i<T;i++){
		scanf("%d",&N[i]);
	}
	for(i=0;i<T;i++){
		unsigned int leap = (N[i]/4)-(N[i]/100)+(N[i]/400);
		//for(j=1;j<=N[i];j++){
			//if(((j%4==0) && (j%100!=0))  || (j%400==0)){	
			//	leap++;
			//}
		//}
    	printf("Case #%d: %u",(i+1),leap);
    	printf("\n");
	}
    return 0;
}
