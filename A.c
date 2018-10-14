#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{    
	int T = 0;
	scanf("%d",&T);
	int N[T];
	int i = 0;
	for(i=0;i<T;i++){
		scanf("%d",&N[i]);
	}
    for(i=0;i<T;i++){
		printf("Case #%d:\n",(i+1));
		int j = 0;
		for(j=2;j<=N[i];j++){
			int prime =1;
			int k=0;
		    for (k = 2; k * k <= j; k++) {
		        if (j % k == 0) {
		            prime = 0;
					break;
		        }
		    }
		    if(prime==1)printf("I will become a good boy.\n");
		}	
	}
    return 0;
}
