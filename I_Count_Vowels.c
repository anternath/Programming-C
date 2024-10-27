#include<stdio.h>
int fun(char ch[],int i){
    if(ch[i]=='\0') return 0;
    int ans = fun(ch,i+1);
    if(ch[i]=='a'|| ch[i]=='e'||ch[i]=='o'||ch[i]=='i'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
        return ans+1;
    }
    else{
        return ans;
    }
}
int main(){
    char ch[201];
    fgets(ch,201,stdin);
    int cmt = fun(ch,0);
    printf("%d",cmt);
    return 0;
}