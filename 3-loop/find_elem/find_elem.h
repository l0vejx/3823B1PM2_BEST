#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 1, p;
    p = left + right;
    while (left <= right){
        if (p / 2 > number)
            number = number / 2;
        else if (p / 2 < number)
            number = number * 2;
        else if (p == number)
            return i*(number - left);
        i += 1;
    }
}