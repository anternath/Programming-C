#include<stdio.h>
int main(){
    printf("Odd number 1-20 :\n");
    for(int i=1; i<=20; i=i+2){
        printf("%d \n",i);
    }
    printf("Even number 1-20 :\n");
    for(int i=2; i<=20; i=i+2){
        printf("%d \n",i);
    }
    return 0;
}