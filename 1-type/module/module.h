int get_module(int a, int b, int c) {
    while (((a - c) > 0) && ((b - c) > 0)){
        a-=c;
        b-=c;
    }
    int f = (a*b)%c;
    return f;
}