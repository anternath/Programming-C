#include<stdio.h>
#include<string.h>
int main(){
    int l;
    scanf("%d",&l);
    for(int i=1; i<=l; i++){
        char ch[101];
    scanf("%s",&ch);
    int len = strlen(ch);
    if(len>10){
            int a = len-2;
            printf("%c%d%c\n",ch[0],a,ch[len-1]);
    }
    else{
        printf("%s\n",ch);
    }
    }
    return 0;
}