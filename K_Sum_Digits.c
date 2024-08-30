#include<stdio.h>
int main(){
    int n, sum=0;
    scanf("%d",&n);
    char ch[n+1];
    scanf("%s",ch);
    for(int i=0; i<n; i++){
        printf("%s",ch[i]);
    }
    
    return 0;
}