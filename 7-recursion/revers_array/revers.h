#include <math.h>

void reverse_array(int* array, int array_size){
    if(array_size <= 1){
        return;
    }
    int t = array[array_size - 1];
    array[array_size - 1] = *array;
    *array = t;
    array ++;
    reverse_array(array, array_size - 2);
}