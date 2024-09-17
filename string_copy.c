#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100],c[100];
    scanf("%s %s %s",&a,&b,&c);
    for(int i=0; i<=strlen(b); i++){
        a[i]=b[i];
    }
    strcpy(b,c);//build in function for copy

    printf("%s %s %s",a,b,c);
    return 0;
}