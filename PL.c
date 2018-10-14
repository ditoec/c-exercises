#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	unsigned int N[T];
	int i = 0, j = 0;
	for(i=0;i<T;i++){
		scanf("%u",&N[i]);
	}
	for(i=0;i<T;i++){
    	char bin[33];
    	unsigned int remainder, counter;
    	counter = 0;
	    do
    	{
        	remainder = N[i] % 2;
        	bin[counter++] = remainder + '0';
    	} 
		while( N[i] /= 2 );
	    
		bin[counter] = '\0';
    	printf("Case #%d: %s\n",(i+1),bin);
	}
    return 0;
}
