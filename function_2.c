#include<stdio.h>
int dbl(int x, int y){
    int sum = x+y;
    return sum;
}
int main(){
    int s= dbl(20,30);
    printf("%d",s);
    return 0;
}