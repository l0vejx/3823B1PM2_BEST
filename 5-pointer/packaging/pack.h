#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size > 8) return 0;
    unsigned long long *parr = (unsigned long long *)arr;
    return *parr;
}

unsigned char unpack_ull(unsigned long long input){
    unsigned char *arr = (unsigned char *)&input;
    return arr[4];
}