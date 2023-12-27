#include <math.h>

double find_sum_elements_series(int k){
    if(k < 0){
        return k ;
    }
    double foo(int c){
        if(c == 0)
        return 0 ;
        float a = (foo(c - 1) + 1)/c;
        return a;
    }
    float summ = 0;
    for(int i = 1 ; i < k ; i ++){
        summ += (foo(i - 1) + 1)/i;
    }
    return summ;
    
}
