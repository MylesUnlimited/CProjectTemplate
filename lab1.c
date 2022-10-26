#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * readString(char * file){

    char * dest;

    dest = (char *) malloc(100);
    
    FILE *fileptr;                          
    fileptr = fopen(file, "r");   

    fgets(dest, 100, fileptr);

    fclose( fileptr );

    return dest;
    }
    
    
char* mysteryExplode(char * stuff){

    char* new;

    int length = strlen(stuff) + 1;

    new = (char *) malloc(((length)*(length+1))/2);

    for (int p = 0; p < length; p++){
        
        strncat(new, stuff, p);
    }

    return (new);
}

