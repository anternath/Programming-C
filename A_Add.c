#include<stdio.h>
int fun(int x, int y){
    int sum = x+y;
    printf("%d",sum);
    return sum;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    fun(a,b);
    return 0;
}