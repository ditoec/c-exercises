#include <stdio.h>
#include <string.h>
#include <math.h>

int calculateSum(int N, int * sum){
    
	if (N<0||N>1000)
	{
		*sum = 0;
		return -1;
	}
	int i=0;
	for(i=1;i<=N;i++)
	{
		*sum+=i;
	}
	return 0;
}

int main()
{    
	int N = 0;
	int sum;
	scanf("%d",&N);
	int result = calculateSum(N,&sum);
    
    printf("%d", sum);
    return 0;
}
