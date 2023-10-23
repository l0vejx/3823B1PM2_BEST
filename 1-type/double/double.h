#include <math.h>

bool compare_double(double x, double y) {
    if (fabs(x-y)<0.00000001){
        return true;
    }
    else{
        return false;
    }
}

int get_nearest_int(double x) {
    int a=x/1;
    if (x-a>0.5){
        return a+1;
    }
    else{
        return a;
    }
}

double get_fractional(double x) {
    return 0.1;
}
