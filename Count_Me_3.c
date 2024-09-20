#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int c=0,s=0,j=0;
    char ch[10001];
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%s",&ch);
        for(int i=0; i<strlen(ch); i++){
        if('A'<=ch[i]&&'Z'>=ch[i]){
            c++;
        }
        else if('a'<=ch[i]&&'z'>=ch[i]){
            s++;
        }
        else if('0'<=ch[i]&&'9'>=ch[i]){
            j++;
        }
    }
    printf("%d %d %d\n",c,s,j);
    c=0;s=0; j=0;
    }
    
    return 0;
}