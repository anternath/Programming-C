#include<stdio.h>
#include<string.h>
int main(){
    char ch[1001];
    scanf("%s",&ch);
    int pali=0;
    int a = strlen(ch)-1;
    for(int i=0; i<a; i++){
        if(ch[i]==ch[a]){
            pali =0;
        }
        else{
            pali = 1;
            break;
        }
        a--;
    }
    if(pali==0){
        printf("YES");
    }
    else if(pali==1){
        printf("NO");
    }
    return 0;
}