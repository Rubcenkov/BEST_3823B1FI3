#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    int i = 0;
    int n = 0 ;
    while(str[i]){
        char a = str[i];
        if(str[i + n] == sym){
        while(str[i + n] == sym){
            n += 1;
        }
        
        str[i] = str[i + n];
        
        }
        else{
            str[i] = str[i + n];
        }
        i += 1;
        
    }
}

