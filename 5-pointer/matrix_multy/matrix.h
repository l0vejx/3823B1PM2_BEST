#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if (aN != bM) return NULL;
    int* matrix = malloc(aM * bN);
    int sum = 0;
    for (int i = 0; i < aM; i ++){
        for (int j = 0; j < bN; j++){
            sum = 0;
            for (int k = 0; k < aN; k++){
                sum += A[i*aN + k]*B[j + k*bN];
            }
            matrix[i*bN + j] = sum;
        }
    } 
    return matrix;
}
