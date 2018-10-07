#include <stdio.h>
#include <string.h>
#include <math.h>

int calculateFollowers(int N, int K, int * followers){
    
	if (N<1||N>128)
	{
		*followers = 0;
		return -1;
	}
	if (K<1||K>30)
	{
		*followers = 0;
		return -1;
	}
	*followers = N*pow(2,K);
	return 0;
}

int main()
{    
	int N = 0;
	int K = 0;
	int followers;
	 
	scanf("%d",&N);
	scanf("%d",&K);
	    
	int result = calculateFollowers(N,K,&followers);
    
    printf("%d\n", followers);
	
    return 0;
}
