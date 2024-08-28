#include<stdio.h>
int main(){
    long long int a,b,c;
    scanf("%lld %lld %lld",&a, &b, &c);
    int s=0;
    while(b!=0||a!=0||c!=0){
        if(a>=1&&b>=1&&c>=1){
            s=s+1;
            a=a-1;
            b=b-1;
            c=c-1;
        }
    }
    while(a!=0||c!=0){
        if(a>=2&&c>=1){
            s=s+1;
            a=a-2;
            c=c-1;
        }
    }
    printf("%d",s);
    return 0;
}