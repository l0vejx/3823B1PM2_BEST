#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0, mid, a = left;
    while (left <= right){
        i += 1;
        mid = (left + right) / 2;
        if (number > mid) left = mid + 1;
        else if (number == mid) return ((number - a) * i);
        else right = mid - 1;
    }

    return i;

}