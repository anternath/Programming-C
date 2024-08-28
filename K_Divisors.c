#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s = a/2;
    for(int i=1; i<=s;i++){
        if(a%i==0){
            printf("%d\n",i);
        }
    }
    printf("%d\n",a);
    return 0;
}