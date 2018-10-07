#include <stdio.h>
#include <string.h>
#include <math.h>

int calculatePoint(int N, int * points){
    
	if (N<0||N>1000)
	{
		return -1;
	}
	int totalPeople = 3+N;
	int freePoints = totalPeople/3;
	*points = totalPeople-freePoints;
	return 0;
}

int main()
{    
	int N = 0;
	int points;
	scanf("%d",&N);
	int result = calculatePoint(N,&points);
    
    if(result ==0)
    {
    	printf("%d\n", points);
	}
	
    return 0;
}
