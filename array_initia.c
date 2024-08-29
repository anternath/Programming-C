#include<stdio.h>
int main(){
    int ar[4]={12,11,12,15};
    int ar1[5]={0};
    for(int i=0; i<4; i++){
        printf("%d\n",ar[i]);
        printf("%d\n",ar1[i]);
    }
    return 0;
}