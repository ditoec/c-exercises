#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 10
#define MAX_PHONE_LENGTH 8
#define SPACES 2

#define TOTAL_CHARS MAX_NAME_LENGTH+MAX_PHONE_LENGTH+SPACES 

int split_str(char* src, char* dst )
{
	char* tokens[6];
	tokens[0] = (char *) malloc(MAX_NAME_LENGTH+1);
	memset(tokens[0],0,MAX_NAME_LENGTH+1);
	tokens[1] = (char *) malloc(MAX_PHONE_LENGTH+1);
	memset(tokens[1],0,MAX_PHONE_LENGTH+1);
	tokens[2] = (char *) malloc(MAX_NAME_LENGTH+1);
	memset(tokens[2],0,MAX_NAME_LENGTH+1);
	tokens[3] = (char *) malloc(MAX_PHONE_LENGTH+1);
	memset(tokens[3],0,MAX_PHONE_LENGTH+1);
	tokens[4] = (char *) malloc(MAX_NAME_LENGTH+1);
	memset(tokens[4],0,MAX_NAME_LENGTH+1);
	tokens[5] = (char *) malloc(MAX_PHONE_LENGTH+1);
	memset(tokens[5],0,MAX_PHONE_LENGTH+1);
		
	int i=0,j=0,k=0;
	int name_string = 1;
	 
	for(i=0;i<strlen(src);i++)
	{
		char chr = src[i];
		if(chr>='0'&&chr<='9')
		{
			if(name_string==1){
				name_string=0;
				k=0;
				j++;
			}
			tokens[j][k] = chr;
			k++;	
		}
		else if((chr>='A'&&chr<='Z')||(chr>='a'&&chr<='z'))
		{
			if(name_string==0){
				name_string=1;
				k=0;
				j++;
			}
			tokens[j][k] = chr;
			k++;			
		}
	}
	
	k=0;
	
    for(i=0;i<6;i++)
    {
    	for(j=0;j<strlen(tokens[i]);j++)
    	{
    		dst[k]=tokens[i][j];
    		k++;
		}
		if(i%2==0)
		{
			k=k+(TOTAL_CHARS-(strlen(tokens[i+1])+strlen(tokens[i])));
		}
		else
		{
			dst[k]='\n';
			k++;
		}
    }
	
    return 0;
}

int main ()
{   
	char input[] ="Jojo12345678Lili12345679Abcdefghij12345680";
        
	//we now that there will only be 3 lines of name+phone, each line does not consists more than 18 characters
	char output[(TOTAL_CHARS+1)*3+1];
    memset(output,' ',(TOTAL_CHARS+1)*3);
    output[(TOTAL_CHARS+1)*3]=0;
    
	printf("INPUT = %s\n",&input); 
	
	split_str(input,output);

	printf("OUTPUT = \n%s\n",output);
    
    return 0;
}
