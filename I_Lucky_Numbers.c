#include<stdio.h>
int main(){
    int a,m,n;
    scanf("%d",&a);
    m=a%10;
    n=a/10;
        if(m%n==0){
            printf("YES");
        }
        else if(n%m==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    return 0;
}