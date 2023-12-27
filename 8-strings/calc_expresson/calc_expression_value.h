#include <math.h>
#include <string.h>

int calculate_expression(char expression[]){
    int i = 0;
    int summ = 0;
    int n = 1;
    int num = 0 ;
    while(expression[i]){
        if(i >= 1){
            if((expression[i] == '+' || expression[i] == '-') && (expression[i - 1] == '-' || expression[i - 1] == '+'))
                return -1;
        }
        
        if(expression[i] == '+'){
        summ += n * num;
        n = 1;
        num = 0;
        }
        else if(expression[i] == '-'){
        summ += n * num;
        n = -1;
        num = 0 ;
        }
        else {num *= 10; num += ((int)expression[i] - 48);}

        i ++ ;
    }
    summ += n * num ;
    return summ ;
}