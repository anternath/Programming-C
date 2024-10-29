#include<stdio.h>
int main(){
    int n[5]={1,2,3,4,5};
    int a=0;
    int b=4;
    for(int i=0; a<b; i++){
        int tem= n[a];
        n[a]=n[b];
        n[b]=tem;
        a++;
        b--;
    } 
    for(int i=0; i<5; i++){
        printf("%d ",n[i]);
    }
    return 0;
}