#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int T = 0;
	char I[6] = "!%&^|";
	scanf("%u",&T);
	char N[T][3];
	char O[T][3];
	int i = 0, j = 0, k =0;
	for(i=0;i<T;i++){
		for(j=0;j<3;j++){
			scanf(" %c",&N[i][j]);
		}
	}
	for(i=0;i<T;i++){
		int l =0;
		for(k=0;k<6;k++){
			for(j=0;j<3;j++){
				if(N[i][j]==I[k]){
					O[i][l]=I[k];
					l++;	
				}
			}
		}
    	printf("Case #%d:",(i+1));
    	for(j=0;j<3;j++){
			printf(" %c",O[i][j]);
		}
    	printf("\n");
	}
    return 0;
}
