#include "header.h"

long long ToInt(string str){
    long long num = 0;
    bool a = false;
    if (str[0] == '-')
        a = true;
    for(int i = 0; i < itc_len(str); i++){
        if(str[i] >= '0' and str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
    }
    if (a == true)
        num *= -1;
    return num;
}
long long itc_len(string str){
    long long i=0;
    while (str[i] != '\0'){
        i++;
    }
    return (i);
}

void itc_SetColor(int text, int background)
{
   HANDLE handlep = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(handlep,  text);
}
