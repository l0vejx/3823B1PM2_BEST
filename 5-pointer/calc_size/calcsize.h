#include <math.h>

int calcsize(void* memory){
    char* pChar = (char*)memory;
    int size = 0, p, len, i = 0;
    for(i = 0;; i++){
        if (pChar[i] == 11){
            p = i;
        }
        if (pChar[i] == 47){
            len = i - p;
            i += len;
            break;
        }
    } return i;
}
