#include<stdio.h>
#include<string.h>
int main(){
    char ch[11];
    char ch1[11];
    scanf("%s",&ch);
    scanf("%s",&ch1);
    printf("%d %d\n",strlen(ch),strlen(ch1));
    printf("%s%s\n",ch,ch1);
    for(int i=0; i<strlen(ch1)-1; i++){
        printf("%c",ch1[i]);
    }
    for(int i=1; i<=strlen(ch1)+1; i++){
        printf("%c",ch[i]);
    }
    printf(" %c%c",ch[0],ch1[strlen(ch1)-1]);
    return 0;
}