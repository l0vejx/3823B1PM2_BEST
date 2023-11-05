long long calc_row(int n, long long k){
    int sum = 0;
    long long a = ((double)(1+n)/2)*n;
    if (n>100000) return 0;
    return a*k;
}