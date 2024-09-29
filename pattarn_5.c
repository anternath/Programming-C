#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s= (n*2)-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int j=s; j>=i*2-1; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}