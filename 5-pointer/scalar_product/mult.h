#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    int p1 = 0, p2 = 0, p3 = 0;
    double c = 0;
    for (int i = 0; i < size; i++){
        p1 += vec1[i]*vec1[i];
        p2 += vec2[i]*vec2[i];
        p3 += vec1[i]*vec2[i];
    }
    c = (double)p3/(sqrt(p1*p2));
    double t = acos(c)* 180 / 3.14;

    return (int)t;
}
