#include<stdio.h>
int main(){
    int age;
    float width,mark;
    char group;
    scanf("%d %f %c %f%%",&age, &width,&group,&mark);
    printf("%d %0.3f %c %f%%",age,width,group,mark);
    return 0;
}