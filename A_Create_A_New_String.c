#include<stdio.h>
#include<string.h>
int main(){
    char ch1[1002],ch2[1002];
    scanf("%s",&ch1);
    scanf("%s",&ch2);
    int a = strlen(ch1);
    int b = strlen(ch2);
    printf("%d %d\n",a,b);
    printf("%s %s",ch1,ch2);
    return 0;
}