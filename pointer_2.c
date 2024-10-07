#include<stdio.h>
int main(){
    int n= 50;
    int * x = &n;
    printf("%d\n",*x);
    *x=500;
    printf("%d",n);
    return 0;
}