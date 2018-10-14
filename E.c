#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{    
	unsigned int T = 0;
	scanf("%u",&T);
	unsigned long long int N[T];
	int i = 0;
	for(i=0;i<T;i++){
		scanf("%llu",&N[i]);
	}
	for(i=0;i<T;i++){
		unsigned long long int NN=N[i],RN=0,NRN=0,NNRN=0,RNRN=0;
		
		while (NN != 0)
   		{
      		RN = RN * 10;
      		RN = RN + NN%10;
      		NN = NN/10;
   		}
   		NRN = N[i]+RN;
   		NNRN = NRN;
   		while (NNRN != 0)
   		{
      		RNRN = RNRN * 10;
      		RNRN = RNRN + NNRN%10;
      		NNRN = NNRN/10;
   		}
   		
		printf("Case #%d: %llu %llu %llu %llu\n",(i+1),N[i],RN,NRN,RNRN);	
	}
    return 0;
}
