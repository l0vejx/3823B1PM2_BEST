#include <math.h>

char count_max_digit(long long int number){
    number = fabs(number);
    int max=0, k = 0, p;
    while (number > 0){
        p = number % 10;
        if (p > max){
            k = 1;
            max = p;
        }
        else if (max == p) k += 1;
        number /= 10;
    }
    return k;
}