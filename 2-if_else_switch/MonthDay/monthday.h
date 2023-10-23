int monthday(int month, int year){
    if (month==2)
        if (year%4==0)
            if (year%100!=0) return 29;
            else
                if (year%400==0) return 29;
                else return 28;
    else return 28;
    if (((month%2==1)||(month==8)||(month==12))&&(month!=9)) return 31;
    else return 30;

    
}