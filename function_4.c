#include<stdio.h>
int test(){
    int a,b;
    scanf("%d %d",&a,&b);
    int multi = a*b;
    return multi;
}
int main(){
    printf("please input two value for multiplication :\n");
    int s= test();//if you write a value, this function ignore this value.
    printf("%d",s);
    return 0;
}