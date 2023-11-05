int fibb(int m){
    if (m == 0) return 0;
    if (m == 1) return 1;
    return fibb(m - 2) + fibb(m - 1);
    }
long fib(int m){
    int sum = 0;
    for (int i = 1; i < m; i++){
        sum += fibb(i);
    }
    return sum;
}