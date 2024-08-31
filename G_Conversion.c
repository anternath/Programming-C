#include<stdio.h>
#include<string.h>
int main(){
    char ch[100001];
    scanf("%s",ch);
    int a = strlen(ch);
    for(int i=0; i<a; i++){
        if(ch[i]==','){
            ch[i]= ' ';
        }
        if('a'<=ch[i]<='z'){
            ch[i] = ch[i]-32;
        }
        
    }
    printf("%s",ch);
    return 0;
}