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
    int a=x/1;
    if (x>0){
        return x-a;
    }
    else{
        if (abs(x-a)<0.5){
            return fabs((a-1)-x);
        }
        else{
            return fabs(x-a);
        }
    }
}
