#include<stdio.h>
void test(int a, int b){
    int x= a*b;
    printf("%d",x);
    return;
}
int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    test(a,b);//void cannot be used to initialize the entity of any data_type. 
    return 0;
}