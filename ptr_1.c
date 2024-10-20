#include<stdio.h>
int main(){
    int x=100;
    printf("x er address : %p\n",&x);
    int *p = &x;
    printf("x er address : %p\n",p);
    int *ptr = p;
    printf("change korar age x er value : %d\n",x);
    *ptr = 200;
    printf("ptr er address %p\n",&ptr);
    printf("ptr er memory size : %d\n",sizeof(ptr));
    printf("x er memory size :%d\n", sizeof(x));
    printf("change korar por x er value : %d",x);
    return 0;
}