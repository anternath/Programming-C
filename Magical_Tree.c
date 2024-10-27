#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2!=0){
        int x= n-1;
        x=x/2;
        x=6+x;
        int s=x;
        for(int i=1; i<=x; i++){
            for(int j=i; j<=x-1; j++){
                printf(" ");
            }
            for(int k=1; k<=(i*2)-1; k++){
                printf("*");
            }
            printf("\n");
        }
        for(int i=1; i<=5; i++){
            for(int j=1; j<=5; j++){
                printf(" ");
            }
            for(int k=1; k<=n; k++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}