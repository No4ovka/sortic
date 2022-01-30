#include "header.h"

long long ToInt(string str){
    long long num = 0;
    for(int i = 0; i < itc_len(str); i++){
        if(str[i] >= '0' and str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
    }
    return num;
}
long long itc_len(string str){
    long long i=0;
    while (str[i] != '\0'){
        i++;
    }
    return (i);
}
