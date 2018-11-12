#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int phi(int n) {
    int result = n;
    int i = 0;
    for (i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if(n > 1)
        result -= result / n;
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
		printf("Case #%u: %d\n",(i+1),phi(A[i][0]));	
	}
    return 0;
}
