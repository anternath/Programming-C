#include<stdio.h>
int main(){
    int n,w,h;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d %d",&w,&h);
        if(w==h){
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }
    return 0;
}