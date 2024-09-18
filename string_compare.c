#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v = strcmp(a,b);
    if(v<0){// value return less than zero
        printf("A choto");
    }
    else if(v>0){// value return greater than zero
        printf("B choto");
    }
    else{// value return equal zero
        printf("same");
    }
    return 0;
}