#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char a[1000001];
    scanf("%d",&n);
    scanf("%s",&a);
    int sum =0;
    for(int i=0; i<n; i++){
        a[i]= a[i]-48;
        sum = sum + a[i];
    }
    printf("%d\n",sum);
    return 0;
}