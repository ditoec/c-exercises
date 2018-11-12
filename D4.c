#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long long int bin_exp(unsigned int x, unsigned int n, unsigned int prime)
{
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x % prime;
    } else {
        unsigned long long int temp = bin_exp(x, n / 2,prime);
        temp = (temp * temp) % prime;
        if (n % 2 == 0) {
            return temp;
        } else {
            return ((x % prime) * temp) % prime;
        }
    }
}


int main()
{    
	unsigned int N = 0;
	unsigned int prime = 1000000007;
	scanf("%u",&N);
	unsigned int A[N][2];
	unsigned int i = 0, j = 0, k =0;
	for(i=0;i<N;i++){
		scanf("%u",&A[i][0]);
		scanf("%u",&A[i][1]);
	}
	for(i=0;i<N;i++){
		unsigned long long int res = (bin_exp(2,A[i][0],prime)*bin_exp(3,A[i][1],prime)) % prime;
		printf("%llu\n",res);
	}
    return 0;
}
