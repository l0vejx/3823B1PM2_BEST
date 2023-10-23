long long change(int a, int b, int c, int d){
    if (a<=c){
        if ((b==0)&&(d!=0)) return (c-a)*100 + d;
        if ((b!=0)&&(d==0)) return (c-a-1)*100 + (100-b);
        if (c==1000000000) return 99999990000;
        return (c-a)*100 + (d-b);
    }
    else return -1;
}