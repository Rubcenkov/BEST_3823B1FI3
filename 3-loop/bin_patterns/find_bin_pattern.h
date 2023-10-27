#include <math.h>
char find_bin_pattern(int numb){
    int m[100] = {}, t = 0, c = 0;
    while (numb>0){
        m[t] = numb%2;
        numb = numb/2;
        t+=1;
    }
    for (int i = 0; i<97; i++){
        if (m[i] == 1 && m[i+1] == 0 && m[i+2] == 1){
            c+=1;}
    }
    return c;
}