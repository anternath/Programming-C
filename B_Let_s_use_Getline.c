#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000001];
    fgets(ch,1000001,stdin);
    for(int i=0; i<=strlen(ch); i++){
        if(ch[i]!=92){
           printf("%c",ch[i]); 
        }
        else{
            break;
        }
    }
    
    return 0;
}