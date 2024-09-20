#include<stdio.h>
#include<string.h>
int main(){
    char ch[10001];
    scanf("%s",&ch);
    int count[26]={0};
    for(int i=0; i<strlen(ch); i++){
        int val= ch[i]-97;
        count[val]++;
    }
    for(char i='a'; i<='z'; i++){
        if(count[i-97]!=0){
            printf("%c - %d\n",i,count[i-97]);
        }
    }
    return 0;
}