#include <math.h>
#include <stdlib.h>

int* array_generator(int* real_size, int k, int m, int f) {
    *real_size = 80 ;
    int* arr = (int*)malloc(*real_size * sizeof(int));
    
    int summ = 0 ;
    arr[79] = -(f/2);
    arr[78] = arr[79] + f ;
    for(int i = 0 ; i < 78 ; i ++ ){
        arr[i] = 0 ;
    }
    
    int c = 0 ;
    while ( summ > k ){
        arr[c % 78] -= 1 ;
        c += 1 ;
        summ -= 1 ;
    }
    c = 0;
    while ( summ < m ){
        arr[c % 78] += 1 ;
        c += 1 ;
        summ += 1 ;
    }
    
    return arr;
}