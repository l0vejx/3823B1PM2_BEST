#include <math.h>

char find_digit(double number, char digit){
    if ((digit >= 10) || (digit < 0)) return -1;
    long long int num = number, i = 0;
    char k = 0, count = 0;
    while (num >= 1){
        i += 1;
        k = num % 10;
        num = num / 10;
        if (count >= 1) count += 1;
        if (k == digit) count = 1;
    }
    if (count > 0) return count;
    int glob_c = i + 1;
    for (int i = 1; i < 20; i++){
        k = (int)(number / pow(0.1, i)) % 10;
        glob_c += 1;
        if (k == digit) return glob_c;

    }
    if (glob_c == 0) return -1;
    return 0;
}