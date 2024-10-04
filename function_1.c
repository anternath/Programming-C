#include<stdio.h>
int sumation(int x, int y);
int main(){
    int s= sumation(19, 39);
    printf("%d", s);
    return 0;
}
int sumation(int x, int y){
    int a = x+y;
    return a;
}