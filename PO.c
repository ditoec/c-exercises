#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	long long int N[T];
	int i = 0;
	for(i=0;i<T;i++){
		scanf("%lld",&N[i]);
	}
	for(i=0;i<T;i++){
   		if(N[i]>=INT_MIN&&N[i]<=INT_MAX)printf("Case #%d: integer\n",(i+1));
		else printf("Case #%d: long long\n",(i+1));
	}
    return 0;
}
