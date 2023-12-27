#include <math.h>
#include <string.h>

double convert(char num[]){
    int i ;
    float g = 1.0;
    int f = 0 ;
    if(num[0] == '-'){
        g = -1.0;
        f = 1;
    }

    for( i = f ; i < strlen(num); i ++){
        if(num[i] == '.'){
            i -= 1;
            break;
        }
    }
    long double summ = 0;
    for(int j = f ; j <= i ; j ++){
        summ *= 10.0;
        summ += (int)num[j] - 48;
    }
    for(int j = i + 2; j < strlen(num) ; j ++){
        summ *= 10.0 ;
        summ += (int)num[j] - 48;
    }
    long double s = pow(10, (strlen(num) - i - 2));
    return g * summ / s ;

}
