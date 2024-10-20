#include<stdio.h>
int call(int x){
printf("%d\n",x);
x = 500;
printf("%d\n",x);
}
int main(){
    int x= 10;
    call(x);
    printf("%d",x);

    return 0;
}