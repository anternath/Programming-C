#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    int n = ch;
    if(n==122){
        n=97;
    }
    else if(97>=n<122){
        n++;
    }
    char ch1 = n;
    printf("%c",ch1);
    return 0;
}