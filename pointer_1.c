#include<stdio.h>
int main(){
    int x= 50;
    int * p = &x;
    printf("%p\n",p);
    printf("%d\n",*p);
    return 0;
}