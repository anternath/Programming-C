#include<stdio.h>
int main(){
    char ch1[6]={'a','n','t','e','r'};//there is 6 character in this array. \0
    char ch2[7]="Anter\0";//here autometic initialization a character of \0. 100%
    printf("%s\n",ch1);
    printf("%s\n",ch2);
    printf("%d\n",sizeof(ch2));
    printf("%d\n",sizeof(ch1));
    return 0;
}