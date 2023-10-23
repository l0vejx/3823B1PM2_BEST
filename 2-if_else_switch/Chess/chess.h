int chess_rook(char a, int b, char c, int d){
    if ((((int)a>=65) && ((int)a)<=72) && (((int)c>=65)&&((int)c<=72))){
        if (((a==c)&&(b!=d))||((a!=c)&&(b==d))){
            if (((b>=1)&&(b<=8))&&((d>=1)&&(d<=8))){
                return 1;
            }
            else return 0;
        }
        else return 0;
    }
    else return 0;
}