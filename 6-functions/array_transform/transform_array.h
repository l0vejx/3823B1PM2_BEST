#include <math.h>

void one(double array, int size){
        for (int i = 0; i < size; i++){
            array[i]++;
        }
    }

void two(double array, int size){
    for (int i = 0; i < size; i++){
        array[i] = pow(array[i], 2);
    }
}

void three(double array, int size){
    int sum = 0;
    double sr = 0;
    for (int i = 0; i < size; i++){
        sum += fabs(array[i]);
    }
    sr = (double)sum/size;
    for (int i = 0; i < size; i++){
        array[i] = pow(array[i], sr);
    }
}
void four(double array, int size){
    for (int i = 0; i < size; i++){
        if ((int)array[i] % 2 == 0)
            array[i] *= -1;
        else
            array[i] = pow(fabs(array[i]), -1);
    }
}
void five(double array, int size){
    for (int i = 0; i < size; i++){
        if ((int)array[i] % 2 == 0 && i % 2 == 0)
            array[i] = 0;;
    }
}
void six(double array, int size){
    for (int i = 0; i < size; i++){
        array[i] = pow(array[i], 2);
    }
}
void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < 6; i++){
        switch(*commands){
            case One: one(*array, size);
            case Two: two(*array, size);
            case Three: three(*array, size);
            case Four: four(*array, size);
            case Five: five(*array, size);
            case Six: six(*array, size);
        }
    return;
}
}
