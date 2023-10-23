int chocolate(int n, int m, int k){
    if ((n>0)&&(m>0))
        if ((k%n==0)||(k%m==0))
            return 1;
        else return 0;
    else return 0;
}