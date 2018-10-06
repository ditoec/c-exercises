#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** split_str(char* src, const char* delim, int* length)
{
	char ** res = NULL;
	int n_delim = 0, i;
	
	char *  p    = strtok (src,delim);
	
	/* split string and append tokens to 'res' */	
	while (p) {
	  res = realloc (res, sizeof (char*) * ++n_delim);
	
	  if (res == NULL)
	    exit (-1); /* memory allocation failed */
	
	  res[n_delim-1] = p;
	
	  p = strtok (NULL,delim);
	}
	
	/* realloc one extra element for the last NULL */
	res = realloc (res, sizeof (char*) * (n_delim+1));
	res[n_delim] = 0;
		
	*length = n_delim;
	
    return res;
}

int main ()
{
    char src[] ="abc/qwe/ccd";
    char ** dst;
    int i,length;

	printf("INPUT = %s\n",src); 
	
	dst = split_str(src,"/",&length);

	printf("OUTPUT = \n");
    for (i = 0; i < length; ++i) 
        printf("%s\n", dst[i]);

    return 0;
}
