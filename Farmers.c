#include<stdio.h>
int main(){
    int n;
    int a,b,c;
    scanf("%d",&n);
    for(int i=0; i<+n; i++){
        scanf("%d %d %d",&a,&b,&c);
        int d = (a*c)/(a+b);
        int e = c-d;
        printf("%d\n",e);
    }
    return 0;
}