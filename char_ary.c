#include<stdio.h>
int main(){
    int ary[4]={10,12,13,14};
    char ch[5];
    for(int i=0; i<5; i++){
        scanf("%c",&ch[i]);//every space is a character in c programm
    }
    for(int i=0; i<5; i++){
        printf("%c",ch[i]);
    }
    int a= sizeof(ch); //every character consume 1 byte in memory
    int b= sizeof(ary)/sizeof(int);// every integer consume 4 bytes in memory
    printf("%d %d",a,b);
    return 0;
}