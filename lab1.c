#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * readString(char * fileName){

    char * dest;

    dest = (char *) malloc(100);
    
    FILE *fileptr;                          
    fileptr = fopen(fileName, "r");   

    fgets(dest, 100, fileptr);

    fclose( fileptr );

    return dest;
    }
    
    
char* mysteryExplode(const char * str){

    char* new;

    int length = strlen(str);

    new = (char *) malloc((((length)*(length+1))/2)+1);

    for (int p = 0; p < length; p++){
        
        strncat(new, str, p);
    }

    char z ='\0';
    strcat(new, &z);

    return (new);
}

