#include<stdio.h>
int main(){
    int n = 15;
    for(int i=1; i<=15; i++){
        if((3<=i && 8>=i)){
            continue;
        }
        printf("%d",i);
    }
    return 0;
}