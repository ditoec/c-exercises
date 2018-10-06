#include <stdio.h>
#include <string.h>
#include <math.h>

int calculatePoint(int N, int * points){
    
	if (N<0||N>1000)
	{
		printf("ERROR: N outside limit!");
		return -1;
	}
	int totalPeople = 3+N;
	int freePoints = totalPeople/3;
	*points = totalPeople-freePoints;
	return 0;
}

int main()
{    
	int N = 5;
	int points;
	 
    printf("INPUT = N: %d\n",N);  
    
	int result = calculatePoint(N,&points);
    
    if(result ==0)
    {
    	printf("OUTPUT = Points: %d", points);
	}
	
    return 0;
}
