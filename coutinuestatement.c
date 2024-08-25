#include<stdio.h>
int main(){
    for(int i=1; i<=10; i++){
        //if here is any statement continue cannot skip this statement
        if(i==5){
            continue;
        }
        printf("%d \n",i);
    }
return 0;
}