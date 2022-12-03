#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lab1.h"


char * readString(char * fileName){

    char * dest;

    dest = (char *) malloc(100);
    
    FILE *fileptr;                          
    fileptr = fopen(fileName, "r");   

    fgets(dest, MAX_LINE_LEN, fileptr);

    fclose( fileptr );

    dest[strcspn(dest, "\n")] = 0;

    return dest;
    }
    
    
char* mysteryExplode(const char * str){

    int length = strlen(str);

    char* new = (char *) malloc((((length)*(length+1))/2)+1);

    memset(new, '\0', (((length)*(length+1))/2)+1);

    for (int p = 0; p < length; p++){
        
        strncat(new, str, p+1);
    }

    return (new);
}

