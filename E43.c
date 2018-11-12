#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// A simple method to evaluate Euler Totient Function 
int phi(unsigned int n) 
{ 
    unsigned int result = 1;
	int i = 0; 
    for (i = 2; i < n; i++) 
        if (gcd(i, n) == 1) 
            result++; 
    return result; 
} 

int main()
{    
	unsigned int N = 0;
	scanf("%u",&N);
	unsigned int A[N][3];
	unsigned int i = 0, j = 0, k =0;
	for(i=0;i<N;i++){
		scanf("%u",&A[i][0]);
		scanf("%u",&A[i][1]);
		scanf("%u",&A[i][2]);
	}
	for(i=0;i<N;i++){
		printf("Case #%u: %u\n",(i+1),phi(A[i][0]));	
	}
    return 0;
}
