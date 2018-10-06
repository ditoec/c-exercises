#include <stdio.h>
#include <string.h>
#include <math.h>

int calculateFollowers(int N, int K, int * followers){
    
	if (N<1||N>128)
	{
		printf("ERROR: N outside limit!");
		return -1;
	}
	if (K<1||K>30)
	{
		printf("ERROR: K outside limit!");
		return -1;
	}
	*followers = N*pow(2,K);
	return 0;
}

int main()
{    
	int N = 7;
	int K = 3;
	int followers;
	 
    printf("INPUT = N: %d K: %d\n",N,K);  
    
	int result = calculateFollowers(N,K,&followers);
    
    if(result ==0)
    {
    	printf("OUTPUT = Followers: %d", followers);
	}
	
    return 0;
}
