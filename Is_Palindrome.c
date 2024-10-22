#include<stdio.h>
#include<limits.h>
int is_palindrome(){
    char ch[1001];
    scanf("%s",&ch);
    int a=0; 
    int pali = 0;
    int b= strlen(ch) -1;
    for(int i=0; a<b; i++){
        if(ch[a]!=ch[b]){
            pali++;
            break;
        }
        a++;
        b--;
    }
    if(pali==1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int result = is_palindrome();
    if(result==0){
        printf("Not Palindrome");
    }
    else{
        printf("Palindrome");
    }
    return 0;
}