#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    long long int p=a+b;
    long long int q = a*b;
    int r = a-b;
    printf("%d + %d = %lld\n",a,b,p);
    printf("%d * %d = %lld\n",a,b,q);
    printf("%d - %d = %d\n",a,b,r);
    return 0;
}