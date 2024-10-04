#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int s = pow(a,b);//please ignore long long int at pow function.
    printf("%f",s);
    return 0;
}