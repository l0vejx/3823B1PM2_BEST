#include <math.h>

double limit(double eps, int n_max){
    double y, y1, answ = 0, rez = 0;
    for (int i = 1; i <= n_max; i++){
        y = (i)/(sqrt(i * i + i));
        y1 = (i + 1)/(sqrt((i + 1) * (i + 1) + (i + 1)));
        rez = fabs(y1 - y);
        if (rez , eps){
            answ = y1;
            return answ;
        }
    }
    return y;
}