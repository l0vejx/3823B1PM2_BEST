int icecream(int x){
    if (x>0)
        if ((x%5==0)||(x%3==0)||(x%8==0))
            return 1;
        else return 0;
    else return 0;
}