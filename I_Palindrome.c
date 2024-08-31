#include<stdio.h>
#include<string.h>
int main(){
    char ch[1001];
    scanf("%s",ch);
    int a=0, pali=0;
    int b = strlen(ch)-1;
    for(int i=0; a<b; i++){
        if(ch[a]!=ch[b]){
            pali++;
            break;
        }
       
        a++;
        b--;
    }
    if(pali==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}