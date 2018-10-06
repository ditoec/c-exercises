#include <stdio.h>
#include <string.h>

//a function to read src char array, remove spaces from it and put the result in dst char array
int deleteSpace(char src[], char dst[]){
    
	if (strlen(src)>25)
	{
		printf("ERROR: Source contains more than 25 characters!");
		return -1;
	}
	// src is supposed to be zero ended
    // dst is supposed to be large enough to hold src
	int s, d=0;
	//go through every character in the src char array
	for (s=0; src[s] != 0; s++)
	//if we dont find a space, copy the character to the dst array, and increase dst array index
    if (src[s] != ' ') {
		dst[d] = src[s];
    	d++;
    }
    //close the dst char array with 0
	dst[d] = 0;
	
	return 0;
}

int main()
{    
	//define input & output variable with 25 characters + last one is 0
	char input[] = "foot path";
	char output[26];
	 
    printf("INPUT = 2 words: %s\n",input);  
    
	//call deleteSpace function
	int result = deleteSpace(input,output);
    
    if(result ==0)
    {
    	// printf() displays the compound word
    	printf("OUTPUT = Compound word: %s", output);
	}
	
    return 0;
}
