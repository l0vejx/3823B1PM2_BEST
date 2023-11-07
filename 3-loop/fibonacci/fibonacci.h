long fib(int m){
    int sum = 1, c1 = 0, c2 = 1, c3 = 1;;
    if (m < 0) return -1;
    while (c3 <= m){
        sum += c3;
        c1 = c2;
        c2 = c3;
        c3 = c1 + c2;
    }
    return sum;
}