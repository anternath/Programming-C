#include<stdio.h>
#include<string.h>
int main(){
    char ch[100001];
    scanf("%s",&ch);
    int len = strlen(ch);
    for(int i=0; i<=len; i++){
        if(ch[i]==','){
            ch[i]=' ';
        }
        else if('a'<=ch[i]&&ch[i]<='z'){
            ch[i] = ch[i]-32;
        }
        else if('A'<= ch[i] && ch[i]<='Z'){
            ch[i] = ch[i]+32;
        }
        
    }
    printf("%s",ch);
    return 0;
}