#include <math.h>

char find_digit(double number, char digit){
    int k = 1;
    long long num = 0;
    double a = number * 1000000000;
    long long c = a / 1;
    while (c > 0){
        num = num*10 + c%10;
        c /= 10;
    }
    while (num > 0){
        if (num % 10 == digit) return k;
        else k += 1;
        num /= 10;
    }
}