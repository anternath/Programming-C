#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000001];
    int sum=0;
    scanf("%s",&ch);
    for(int i=0; ch[i]!='\0'; i++){
        int a = ch[i]-48;
        sum = sum+a;
     }
    printf("%d\n",sum);
    return 0;
}