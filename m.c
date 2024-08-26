#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>=48&&a<=57){
        printf("IS DIGIT\n");
    }
    else if(a>=65&&a<=91){
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(a>=97&&a<=122){
        printf("ALPHA\nIS SMALL\n");
    }
    return 0;
}