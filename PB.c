#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	char H[T];
	char W[T];
	int i = 0, j = 0, k =0;
	for(i=0;i<T;i++){
		scanf("%u",&H[i]);
		scanf("%u",&W[i]);
	}
	for(i=0;i<T;i++){
    	printf("Case #%d:\n",(i+1));
    	for(j=0;j<H[i];j++){
			for(k=0;k<W[i];k++){
				if(j==0||j==H[i]-1||k==0||k==W[i]-1){
					printf("#");
				}
				else printf(" ");
			}
			printf("\n");

		}
	}
    return 0;
}
