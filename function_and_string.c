#include<stdio.h>
#include<string.h>
void fun(char *ch){
    printf("%d",strlen(ch));
    char nam[10]="Ridoy";
    return nam;//kono function e jodi static array create kora hoi tobe 0th endex chara baki sob memory teke delete hoiye jabe.
}
int main(){
    char ch[10] = "Anter";
    fun(ch);
    return 0;
}