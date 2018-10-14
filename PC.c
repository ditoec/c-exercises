#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	int i = 0, j = 0;
	unsigned int N[T];
	int* A[T];
	for(i=0;i<T;i++){
		scanf("%u",&N[i]);
		A[i] = (int*) malloc(N[i]*sizeof(int));
		memset(A[i],0,N[i]);
		for(j=0;j<N[i];j++){
			scanf("%d",&A[i][j]);
		}
	}
    for(i=0;i<T;i++){
    	char result;
    	int jojo =0, lili = 0;
		int jojo_win = 0, lili_win = 0;	
		for(j=0;j<N[i];j++){
			if (( j % 2) == 0 && abs(A[i][j] % 2) == 0){
				jojo++;
			}
			else if (( j % 2) == 1 && abs(A[i][j] % 2) == 1){
				lili++;
			}	
		}
		if(jojo%2==0)jojo_win=1;
		if(lili%2==1)lili_win=1;
		if(jojo_win==1&&lili_win==0)result=')';
		else if(jojo_win==0&&lili_win==1)result='(';
		else result='|';
		printf("Case #%d: :%c\n",(i+1),result);	
	}
    return 0;
}
