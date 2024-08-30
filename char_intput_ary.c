#include<stdio.h>
int main(){
    char ch[5];//there is a exception in window. he allocate extra memory out of array size
    scanf("%s",ch);
    printf("%s",ch);
    return 0;
}