#include<stdio.h>
void fun(char *ch){
    ch[0] = 'R';
    ch[1] = 'i';
    ch[2] = 'd';
    ch[3] = 'o';
    ch[4] = 'y';
}
int main(){
    char ch[10]="Anter";
    fun(ch);
    printf("%s",ch);
    return 0;
}