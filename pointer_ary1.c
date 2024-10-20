#include<stdio.h>
int main(){
    int ary[5] = {10,20,30,40,50};
    printf("%d\n",*(ary+1));//by pointer
    printf("%d\n",*(1+ary));
    printf("%d\n",ary[1]);
    printf("%d\n",1[ary]);
    printf("%p\n",&ary);
    printf("%p\n",&ary+2);//address alocated by pointer
    printf("%p\n",2+&ary);
    return 0;
}