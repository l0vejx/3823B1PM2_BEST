#include <math.h>

char find_bin_pattern(int number){
    long long num = number;
    int k = 0;
    long long bin;
    while (num > 0){
        if (num % 2 == 0)
            bin = bin*10;
        else
            bin = bin*10 + (num%2);
        num /= 2;
    }
    while (bin > 0){
        if (bin % 1000 == 101)
            k+=1;
        bin = bin / 10;
    }
    return k;
}