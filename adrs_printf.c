#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* makeString(void);

int main(void) {
    char* str=NULL;

    str = makeString();

    printf("str = %s\n", str);
    printf("Adrs(str)=%08X \n",(int)str);
    
    free(str);
}   

char* makeString(void) {
    char* cp = NULL;
    
    cp = (char*)malloc(sizeof(char) * 4);

    if (cp == NULL) {
        printf("îzóÒçÏê¨é∏îs\n");
    }

    strncpy(cp, "ABC", 4);
    printf("Adrs(cp)=%08X \n",(int)cp);

    return cp;
}
