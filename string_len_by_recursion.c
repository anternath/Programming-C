#include<stdio.h>
int fun(char ch[],int i){
    if(ch[i]=='\0')return 0;
    int l= fun(ch,i+1);
    return l+1;
}
int main(){
    char ch[6]="Anter";
    int len= fun(ch,0);
    printf("%d",len);
    return 0;
}