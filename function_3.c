#include<stdio.h>
int test(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int multi = a*b;
    return multi;
}
int main(){
    printf("please input two value for multiplication :\n");
    int s= test();//if you write a value, you could get error.
    printf("%d",s);
    return 0;
}