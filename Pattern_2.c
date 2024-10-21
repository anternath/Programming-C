#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=i; j<=i; j++){
            for(int k=i; k>=1; k--){
                printf("%d",k);
            }
        }
        s--;
        printf("\n");
    }
    return 0;
}