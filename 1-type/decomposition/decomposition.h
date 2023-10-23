int reverse(int number) {
    int a=number/1000;
    int b=(number - a*1000) / 100;
    int c=(number - a*1000 - b*100) / 10;
    int d=number - a*1000 - b*100 - c*10;
    return d*1000 + c*100 + b*10 + a;
}

double decomposition(int number) {
    double a,b,c,d;
    a = 1 / ((double)((number / 1000) * 1000));
    b = 1 / ((double)((number / 100) % 10) * 100);
    c = 1 / ((double)((number / 10) % 10) * 10);
    d = 1 / ((double)(number % 10));
    return 4/(a+b+c+d);
}

int append(int number, int start, int end) {
    int st = start * 100000;
    int num =number * 10;
    if (start > 0)
        return st + num + end;
    else
        return st - num - end;
}
