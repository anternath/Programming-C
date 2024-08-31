#include<stdio.h>
#include<string.h>
int main(){
    char ch[30];
    fgets(ch,12,stdin);
    //there is a exception in windows.length must be less than array size.
    ch[11]= '\n';
    printf("%s",ch[11]);
    return 0;
}