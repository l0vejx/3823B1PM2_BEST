int num_invers(int num){
    if ((num < 0) || (num == 0)) return 0;
    int p = 0;
    while (num > 0){
        p = p*10 + num % 10;
        num /= 10;
    }

    return p;
}