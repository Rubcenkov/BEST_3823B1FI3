#include <math.h>
#include <stdlib.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if (aN != bM) {
        return NULL; // Возвращаем NULL в случае неправильных размеров матриц
    }

    int* nmat = (int*)malloc(aM * bN * sizeof(int)); // Выделяем память под массив результата

    for (int i = 0; i < aM; i++) {
        for (int j = 0; j < bN; j++) {
            int sum = 0;
            for (int k = 0; k < aN; k++) {
                sum += A[i*aN + k] * B[k*bN + j];
            }
            nmat[i*bN + j] = sum;
        }
    }

    return nmat;
}
